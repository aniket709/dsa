class Solution {
  public:
  
   int solve (vector<int>& arr, int n, int target,
     vector<vector<int>>&dp){
       
       if (n==0 && target==0) return 1;
       
       if (n==0 && target!=0) return 0;
       
       if (dp[n][target]!=-1) return dp[n][target];
       
       
       if (arr[n-1]<=target){
           
         dp[n][target]= solve (arr,n-1,target-arr[n-1],dp) + solve (arr,n-1,target,dp);
       }
       
       else{
           
           dp[n][target]=solve (arr,n-1,target,dp);
       }
       
       return dp[n][target] ;
      
   }
    int countPartitions(vector<int>& arr, int diff) {
        
        
        int sum=0;
        for (int it : arr) sum+=it;
        
       if ((sum + diff) % 2 != 0)
        return 0;

    if (sum < diff)
        return 0;

    int target = (sum + diff) / 2;
       int n= arr.size();
       
       vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
       
       return solve (arr,n,target,dp);
        
    }
};