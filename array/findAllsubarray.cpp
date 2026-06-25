# include<iostream>
using namespace std;

 void printAllSubArray(int arr[],int n){

    for (int i=0;i<n;i++){
        for (int j=i;j<n;j++){
            
            for (int k=i;k<=j;k++){
                cout<<arr[k]<<"";
            }
            cout<<endl;
        }
    }
 }


int main (){
int size;
    cout<<"enter the size of the array";
    cin>>size;
    int arr[size];
    cout<<"enter the array now";
    for (int i=0;i<size;i++){
        cin>>arr[i];
    }
    printAllSubArray(arr,size);


}