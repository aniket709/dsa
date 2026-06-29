class Solution {
public:

void merge(vector<int>& arr,int mid , int l, int r){
       
       vector<int> left,right;
       
         int n1 = mid - l + 1;
         int n2 = r - mid;
         
         for (int i = 0; i < n1; i++) {
    left.push_back(arr[l + i]);
}
         
         for (int i = 0; i < n2; i++) {
    right.push_back(arr[mid + 1 + i]);
}
         
            int i = 0, j = 0;
         int k = l;
         
         while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] =left[i];
            i++;
        }
        else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
   }
    void mergeSort(vector<int>& arr, int l, int r) {
        
        
        if (l >=r){
            return ;
        }
        int mid = l + (r-l)/2;
        mergeSort(arr,l,mid);
        mergeSort(arr,mid+1,r);
        merge(arr,mid,l,r);
        
    }
    vector<int> sortArray(vector<int>& nums) {

    

       
        mergeSort(nums, 0, nums.size() - 1);

        vector<int> ans;

         for (int i=0;i<nums.size();i++){
            ans.push_back(nums[i]);
         }
        return ans;
    }
};