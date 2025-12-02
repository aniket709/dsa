# include<iostream>
using namespace std;

/* brute force */   
/* time complwxity o (n^2) space complexity 0(n^2)*/

//  void allZeros(int arr[],int n){

//     if (n==0){
//         return;
//     }
//     vector<int> ans1,ans2,ans3;
//     for (int i=0;i<n;i++){
//         if(arr[i]!=0){
//             ans1.push_back(arr[i]);
//         }
//         else{
//             ans2.push_back(arr[i]);
//         }
//     }

//     for (int i=0;i<7;i++){

//         ans3.push_back(ans1[i]);
//     }
//     for (int j=0;j<7;j++){
//         ans3.push_back(ans2[j]);
//     }

//     for (int i=0;i<7;i++){
//         cout<<ans3[i]<<" ";
//     }

//  }

 void allZeros(int arr[],int n){

    if (n==0){
        return ;
    }

    int j=0;
    for (int i=0;i<n;i++){

        if(arr[i]!=0 && arr[j]==0){

            int temp = arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

        if (arr[j]!=0){
            j++;
        }
    }

    // traversing the array 

    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

 }
int main(){

    int arr[7]= {0,1,2,3,0,8,4};

    allZeros(arr,7);

}