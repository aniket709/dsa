class Solution {
  public:
  
  int solve(vector<int>& arr, int n, int sum1, int totalSum,
   vector<vector<int>>&dp) {


    if (n == 0) {
        int sum2 = totalSum - sum1;
        return abs(sum1 - sum2);
    }
  if (dp[n][sum1] != -1)
        return dp[n][sum1];
        
    int take = solve(
        arr,
        n - 1,
        sum1 + arr[n - 1],
        totalSum,dp
    );

    int notTake = solve(
        arr,
        n - 1,
        sum1,
        totalSum,dp
    );

   return dp[n][sum1] = min(take, notTake);
}
    int minDifference(vector<int>& arr) {
        
       int totalSum = 0;

    for (int x : arr)
        totalSum += x;

    int n = arr.size();
    
    vector<vector<int>>dp(n+1,vector<int>(totalSum+1,-1));

    return solve(arr, n, 0, totalSum,dp);

        
        
    }
};
