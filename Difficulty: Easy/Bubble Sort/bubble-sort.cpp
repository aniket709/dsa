class Solution {
  public:
   void solve (vector<int>& arr,int n){
       if (n==0 || n==1) return;
       
       for (int i=0;i<n-1;i++){
           
           if (arr[i] > arr[i+1]){
               
               swap (arr[i],arr[i+1]);
           }
       }
       
       solve (arr,n-1);
   }
    void bubbleSort(vector<int>& arr) {
        
        int n= arr.size();
        
        solve (arr,n);
        
    }
};