class Solution {
  public:
  int solve (vector<int> &arr,int i,int j,
         vector<vector<int>> &dp){
      
      int mini = INT_MAX;
      
      if (i>=j) return 0;
      
      if (dp[i][j] != -1)
      return dp[i][j];
      
       for (int k=i;k<=j-1;k++){
           
           int temp = solve (arr,i,k,dp) + solve (arr,k+1,j,dp)
           + arr[i-1] * arr[j] * arr[k];
           
           if (mini > temp){
               mini = temp;
           }
       }
       
        return dp[i][j] = mini;
      
  }
    int matrixMultiplication(vector<int> &arr) {
        int n= arr.size();
       vector<vector<int>> dp(n, vector<int>(n, -1));
        
        return solve (arr,1,n-1,dp);
       
       
        
    }
};