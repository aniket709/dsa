// Copyright 2025 Aniket Ranjan
// Copyright 2025 Aniket

#include <iostream>

using std::cout;

void findMinimumInSortedArray(int arr[], int n) {
  if (n <= 0) {
    return;
  }

  int start = 0;
  int end = n - 1;

  while (start < end) {
    int mid = start + (end - start) / 2;

    if (arr[mid] > arr[end]) {
      start = mid + 1;
    } else {
      end = mid;
    }
  }

  cout << arr[start];
}

int main() {
  int arr[6] = {7, 8, -1, 2, 3, 4};
  findMinimumInSortedArray(arr, 6);
}
