# include<iostream>
using namespace std;

/* good but for the array having non zeros number */

// void productOfarray(int arr[],int n){

//     vector<int> ans,ans2;

//    int mul=1;
//     for (int i=0;i<n;i++){
//          mul= mul* arr[i];
//     }

//     for (int i=0;i<n;i++){

      
//         int product = mul/arr[i];

//         ans2.push_back(product);
        
//     }

//     for (int i=0;i<n;i++){
//         cout<<ans2[i]<<" ";
//     }

// }

/* brute-force o(n^2)  */
// void productOfarray(int arr[],int n){

//     vector<int> ans(n,1);

//     for (int i=0;i<n;i++){

//         for (int j=0;j<n;j++){
//             if(i!=j){
//                 ans[i]*=arr[j];
//             }
//         }
//     }

//     for (int i=0;i<n;i++){
//         cout<<ans[i] <<" ";
//     }

// }

 // time complexxity 0(n) and space complexity o(n)

void productOfarray(int arr[],int n){

    if (n==0){
        return;
    }

    int idx=-1;
    int count=0;
    int product=1;

    for (int i=0;i<n;i++){

        if (arr[i]==0){

            count++;

            idx=i;
        }
        else{

            product*=arr[i];
        }
    }
 vector<int> ans(n,0);

  if (count==0){

    for (int i=0;i<n;i++){
        ans[i]= product/arr[i];
    }
  }

  else if (count==1){

    ans[idx]=product;
  }

  for (int i=0;i<n;i++){
    cout<<ans[i]<<" ";
  }


}
int main(){

    int arr[4]={5,3,0,9};

productOfarray(arr,4);


}