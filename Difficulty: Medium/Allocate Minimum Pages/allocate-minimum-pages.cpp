class Solution {
  public:
  
    bool isValid(vector<int> &arr, int k, long long mid) {

    int students = 1;
    long long pageSum = 0;

    for (int pages : arr) {

        pageSum += pages;

        if (pageSum > mid) {
            students++;
            pageSum = pages;
        }

        if (students > k)
            return false;
    }

    return true;
}

int findPages(vector<int> &arr, int k) {

    if (k > arr.size())
        return -1;

    long long start = *max_element(arr.begin(), arr.end());

    long long end = 0;

    for (int pages : arr)
        end += pages;

    long long ans = -1;

    while (start <= end) {

        long long mid = start + (end - start) / 2;

        if (isValid(arr, k, mid)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return ans;

       
        
    }
};