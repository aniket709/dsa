// Copyright 2025 Aniket Ranjan
#include <iostream>

using std::cout;

bool isPossible(int arr[], int n, int k, int mid) {
  int sum = 0;
  for (int i = 0; i < n; i++) {
    sum += (arr[i] + mid - 1) / mid;
  }
  if (sum > k)
    return false;
  return true;
}

int cocoEatingBanana(int arr[], int n, int k) {
  int start = 1;
  int end = arr[n - 1];
  int ans = -1;

  while (start <= end) {
    int mid = start + (end - start) / 2;

    if (isPossible(arr, n, k, mid)) {
      ans = mid;
      end = mid - 1;
    } else {
      start = mid + 1;
    }
  }

  cout << ans;
  return ans;
}

int main() {
  int arr[3] = {3, 5, 10};
  int n = 3;
  int k = 4;
  cocoEatingBanana(arr, n, k);
  return 0;
}
