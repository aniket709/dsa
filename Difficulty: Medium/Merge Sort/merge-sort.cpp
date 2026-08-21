class Solution {
  public:
  
   void merge(vector<int>& arr, int l, int r, int mid) {

       vector<int> left, right;

       int len1 = mid - l + 1;
       int len2 = r - mid;

       for (int i = 0; i < len1; i++) {
           left.push_back(arr[l + i]);
       }

       for (int j = 0; j < len2; j++) {
           right.push_back(arr[mid + 1 + j]);
       }

       int i = 0;
       int j = 0;
       int k = l;

       while (i < left.size() && j < right.size()) {

           if (left[i] > right[j]) {
               arr[k++] = right[j++];
           }
           else {
               arr[k++] = left[i++];
           }
       }

       while (i < left.size()) {
           arr[k++] = left[i++];
       }

       while (j < right.size()) {
           arr[k++] = right[j++];
       }
   }

   void mergeSort(vector<int>& arr, int l, int r) {

       if (l >= r)
           return;

       int mid = l + (r - l) / 2;

       mergeSort(arr, l, mid);

       mergeSort(arr, mid + 1, r);

       merge(arr, l, r, mid);
   
        
    }
};