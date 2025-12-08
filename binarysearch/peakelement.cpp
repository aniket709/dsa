// Copyright 2025 Aniket Ranjan

#include <iostream>
using std::cout;

// time complexity O(n)
int findPeak(int arr[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] < arr[mid + 1]) {
            start = mid + 1;
        } else {
            end = mid;
        }
    }

    cout << "peak element is at index " << start;
    return start;
}

int main() {
    int arr[7] = {1, 2, 1, 3, 5, 6, 4};
    findPeak(arr, 7);
    return 0;
}
