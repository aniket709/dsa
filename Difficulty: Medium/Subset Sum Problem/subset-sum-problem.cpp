class Solution {
  public:
  
    bool issolve(vector<int>& arr, int sum,int n)
    {
         if (n==0 && sum==0) return 1;
       
       if (n==0 && sum!=0) return 0;
       
        if (sum >=arr[n-1]){
            
        return issolve(arr,sum-arr[n-1],n-1) ||
          issolve(arr,sum,n-1);
        }
        
        else
        
        return   issolve(arr,sum,n-1);
       
    }
    bool isSubsetSum(vector<int>& arr, int sum) {
      
      int n= arr.size();
      
      return issolve(arr,sum,n);
       
        
    }
};