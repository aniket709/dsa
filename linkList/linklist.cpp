# include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        next=nullptr;
    }
};
 class LinkedList{
    public:
    Node* head;
   
    LinkedList(){
     head=nullptr;
    }

    void insertAtEnd(int data){
        Node *newNode = new Node(data);
        if(head==nullptr){
            head=newNode;
            return;
        }
        Node*temp=head;
        while(temp->next!=nullptr){
            temp=temp->next;
        }
        temp->next=newNode;
    }

     void insertAtBegning(int data){
        Node* temp=head;

        Node * headNode= new Node(data);
        if (head==nullptr){
             head=headNode;
        }
        headNode->next=head;
        head=headNode;
     }

  void insertAtKPosition(int k, int data) {

    if (k == 1) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return;
    }
    Node* temp = head;
    Node* prev = NULL;
    int cnt = 1;

    while (temp != NULL && cnt < k) {
        prev = temp;
        temp = temp->next;
        cnt++;
    }
    if (prev == NULL) {
        cout << "Invalid position\n";
        return;
    }

    Node* newNode = new Node(data);
    prev->next = newNode;
    newNode->next = temp;
}
    void traverse(){

        Node *temp=head;

        while (temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
 };

 int main (){
    LinkedList list;
    list.insertAtEnd(14);
    list.insertAtEnd(13);
    list.insertAtEnd(20);
    list.insertAtBegning(99);
    list.insertAtKPosition(4,101);
    list.traverse();


 }