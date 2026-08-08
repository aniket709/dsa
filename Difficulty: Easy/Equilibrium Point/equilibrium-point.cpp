class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {

    int n = arr.size();

    vector<int> left(n), right(n);

    left[0] = 0;

    for (int i = 1; i < n; i++) {
        left[i] = left[i - 1] + arr[i - 1];
    }

   
    right[n - 1] = 0;

    for (int i = n - 2; i >= 0; i--) {
        right[i] = right[i + 1] + arr[i + 1];
    }

    for (int i = 0; i < n; i++) {
        if (left[i] == right[i]) {
            return i;
        }
    }

    return -1;
}
};