// Copyright 2025 Aniket Ranjan
#include <iostream>
using std::cout;
#include <vector>

// linear search 0(n)

// vector<int>findFirstAndLastOccurence(vector<int> arr,int target){

//     int n= arr.size();
//     vector<int> ans(2,-1);

//     for (int i=0;i<n;i++){
//         if(arr[i]==target){
//             arr[0]=i;
//             break;
//         }
//     }
//     for (int i=n-1;i>=0;i--){
//         if(arr[i]==target){
//             arr[1]=i;
//             break;
//         }
//     }
//     cout<<arr[0]<<" "<<arr[1];

//     return ans;

// }

// // optimize approach 0(logn)
// vector<int> findFirstAndLastOccurence(vector<int> arr, int target) {
//   int n = arr.size();

//   vector<int> ans(2, -1);

//   int start = 0;
//   int end = n - 1;

//   while (start <= end) {
//     int mid = start + (end - start) / 2;

//     if (arr[mid] == target) {
//       ans[0] = mid;
//       end = mid - 1;
//     } else if (arr[mid] > target) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }
//   }
//   start = 0;
//   end = n - 1;
//   while (start <= end) {
//     int mid = start + (end - start) / 2;

//     if (arr[mid] == target) {
//       ans[1] = mid;
//       start = mid + 1;
//     } else if (arr[mid] > target) {
//       end = mid - 1;
//     } else {
//       start = mid + 1;
//     }
//   }

//   cout << ans[0] << " " << ans[1];
//   return ans;
// }
// int main() {

//   vector<int> arr = {1, 2, 3, 5, 5, 5, 5, 9};
//   findFirstAndLastOccurence(arr, 5);
// }
