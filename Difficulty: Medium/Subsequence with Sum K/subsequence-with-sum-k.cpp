class Solution {
  public:
   bool solve (vector<int>& arr,int n, int k,
    vector<vector<int>>&dp){
       
       if (n==0 && k==0) return true;
      
      if (n==0 && k !=0) return false;
      if (k < 0)
      return false;
      
      if (dp[n][k]!=-1) return dp[n][k];
      
    dp[n][k]= solve (arr,n-1,k-arr[n-1],dp)|| solve (arr,n-1,k
    ,dp);
    
    return dp[n][k];
       
       
       
   }
    bool checkSubsequenceSum(vector<int>& arr, int k) {
        
        int n=arr.size();
        
    vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
      
       return solve (arr,n,k,dp);
        
        
    }
};