class Solution {
  public:
   int merge(vector<int>& arr, int left, int mid, int right) {

    vector<int> l;
    vector<int> r;

    for (int i = left; i <= mid; i++) {
        l.push_back(arr[i]);
    }

    for (int i = mid + 1; i <= right; i++) {
        r.push_back(arr[i]);
    }

    int i = 0;
    int j = 0;
    int k = left;

    int count = 0;

    while (i < l.size() && j < r.size()) {

        if (l[i] <= r[j]) {

            arr[k] = l[i];
            i++;
        }
        else {

            arr[k] = r[j];
            count += l.size() - i;

            j++;
        }

        k++;
    }

    while (i < l.size()) {
        arr[k] = l[i];
        i++;
        k++;
    }

    while (j < r.size()) {
        arr[k] = r[j];
        j++;
        k++;
    }

    return count;
}
     int mergesort(vector<int>& arr, int left, int right) {

         if (left >= right)
             return 0;

         int mid = left + (right - left) / 2;

         int count = 0;

         count += mergesort(arr, left, mid);

         count += mergesort(arr, mid + 1, right);

         count += merge(arr, left, mid, right);

         return count;
     }

    int inversionCount(vector<int> &arr) {
      
     return  mergesort(arr,0,arr.size()-1);
        
    }
};