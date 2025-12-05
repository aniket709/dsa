#include <iostream>
using namespace std;

/* using loop 0(logn) */

//  void binarySearch(int arr[],int n,int target){

//     if (n==0){
//         return ;
//     }
//     int start=0;
//     int end = n-1;
//     int count =0;

//     while (start<=end){

//         int mid = start + (end - start) / 2;
//          if (arr[mid]==target){
//             cout<<"target founded" << " " << mid;
//             count++;
//             break;
//          }
//          else if (arr[mid] > target){
//             end=mid-1;
//          }
//          else{
//             start=mid+1;
//          }
//     }

//     if (count==0){
//         cout<<"no element founded";
//     }
//  }

// with the recursion   0(log n)
void binarySearch(int arr[], int n, int target, int start, int end)
{

    if (n <= 0)
    {
        cout<<"no element is found hence returning";
        return;
    }

        if (start > end)
    {
        cout << "no element found";
        return;
    }

    int cnt = 0;
    int mid = start + (end - start) / 2;

    if (arr[mid] == target)
    {
        cout << "element found " << " " << mid;
        cnt++;
    }
    else if (arr[mid]>target){
        binarySearch(arr,n,target,start,mid-1);
    }
   else
       binarySearch(arr,n,target,mid+1,end);
    }


int main()
{

    int arr[7] = {1, 2, 3, 4, 5, 6, 7};
    binarySearch(arr, -5, 99, 0, 7);
}