// Copyright 2025 Aniket Ranjan
# include<iostream>
using std::cout;

class stack{

    public:

int top;
int size;
int *arr;

stack(int size){

    top=-1;
   this->size=size;
    arr= new int [size];

}

  void push(int x){
   if(top==size-1){
    cout<<"stack-overflow";
    return;
   }
   top++;
   arr[top]=x;
  }

  void  pop(){
    if(top==-1){
        cout<<"stack-underflow";
        return;
    }
    int peek = arr[top];
    top--;

    cout<<"top element is "<<" "<<peek;
    // return peek;
  }
   void peek(){
    if(top==-1){
        cout<<"no peek found because of no element ";
        return ;
    }
    int x = arr[top];

    cout<<std::endl<<"peak element is"<<" "<<x;


   }
  void print(){
    for (int i=0;i<=top;i++){
        cout<<std::endl<<arr[i]<<" ";
    }
  }
};

int main(){

stack obj(5);
obj.push(10);
obj.push(20);
obj.push(110);

obj.print();
obj.pop();
obj.print();
obj.peek();

return 0;

}
