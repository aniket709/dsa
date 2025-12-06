// Copyright 2025 Aniket Ranjan
#include <iostream>
using std::cout;

int searchAndInsert(int arr[], int n, int k) {
  int start = 0, end = n - 1;
  while (start <= end) {
    int mid = start + (end - start) / 2;
    if (arr[mid] == k) {
      return mid;
    } else if (arr[mid] > k) {
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }
  cout << "inserting index is" << " " << start;
  return start;
}
int main() {
  int arr[5] = {2, 6, 7, 10, 14};
  searchAndInsert(arr, 5, 15);
  return 0;
}
