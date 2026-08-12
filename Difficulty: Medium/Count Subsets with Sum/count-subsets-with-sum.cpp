class Solution {
  public:
//   int solve (vector<int>& arr, int target,int n,
//   vector<vector<int>> &dp){
      
//       if (target==0 && n==0) return 1;
//       if (target!=0 && n==0) return 0;
      
//       if (dp[n][target]!=-1) return dp[n][target];
      
//       if (target>=arr[n-1]){
          
//         dp[n][target]=  solve (arr,target-arr[n-1],n-1,dp) + 
//         solve (arr,target,n-1,dp);
//       }
//       else
      
//       dp[n][target]= solve (arr,target,n-1,dp);
      
//       return dp[n][target];
      
//   }
      
    int perfectSum(vector<int>& arr, int target) {
       
       int n = arr.size();
       
    int dp [n+1][target+1];
       
       for (int i=0;i<n+1;i++){
           for (int j=0;j<target+1;j++){
               if(i==0) dp[i][j]=0;
               
               if (j==0) dp[i][j]=1;
           }
       }
       
       for (int i=1;i<n+1;i++){
           for (int j=0;j<target+1;j++){
               
               if (arr[i-1]<=j){
                   
             dp[i][j] = dp[i-1][j-arr[i-1]] + dp [i-1][j];
               }
               else{
                   
                 dp[i][j]= dp[i-1][j];
               }
           }
       }
       
       
     return   dp[n][target];
        
    }
};