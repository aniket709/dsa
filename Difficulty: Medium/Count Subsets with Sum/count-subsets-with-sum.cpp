class Solution {
  public:
  int solve (vector<int>& arr, int target,int n,
   vector<vector<int>> &dp){
      
      if (target==0 && n==0) return 1;
      if (target!=0 && n==0) return 0;
      
      if (dp[n][target]!=-1) return dp[n][target];
      
      if (target>=arr[n-1]){
          
        dp[n][target]=  solve (arr,target-arr[n-1],n-1,dp) + 
        solve (arr,target,n-1,dp);
      }
      else
      
      dp[n][target]= solve (arr,target,n-1,dp);
      
      return dp[n][target];
      
  }
      
    int perfectSum(vector<int>& arr, int target) {
       
       int n = arr.size();
       
       vector<vector<int>> dp (n+1,vector<int>(target+1,-1));
     return   solve (arr,target,n,dp);
        
    }
};