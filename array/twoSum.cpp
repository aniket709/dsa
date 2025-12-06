#include <iostream>
#include <unordered_map>
using std::cout;
// Copyright 2025 Aniket Ranjan

// vector<int> twoSum(int arr[],int n, int target){   // brute-force algorithm

//     // time complexity O(n^2)

//     vector<int> ans;

//     if (n==0){
//         ans.push_back(-1);
//     }
//     for (int i=0;i<n;i++){
//         for(int j=i+1;j<n;j++){
//             if(arr[i]+arr[j]==target){
//                 ans.push_back(i);
//                 ans.push_back(j);

//             }
//         }
//     }
//  return ans;

// }

//  optimize solution
//    vector<int> twoSum(int arr[],int n,int target){

//      unordered_map<int,int>mp;

//         vector<int>  ans;

//      for (int i=0;i<n;i++){

//        int complement = target-arr[i];

//        if(mp.find(complement)!=mp.end()){
//         ans.push_back(mp->second);
//         ans.push_back(i);
//        }
//        else{
//        mp[arr[i]]=i;

//        }
//      }
//      return ans;
//    }

// int main(){

//     int arr [7]={1,2,3,4,5,2,1};

//     vector<int> ans;

//     ans = twoSum(arr,7,9);

//      for (int i=0;i<ans.size();i++){
//         cout<<ans[i]<<" ";
//      }

// int mini =INT_MIN;

// for (int i=0;i<ans.size();i+=2){

//     if(abs(ans[i]-ans[i+1]) >mini ){
//         mini= abs (ans[i]-ans[i+1]);
//     }

// }

// cout<<mini;

// }
