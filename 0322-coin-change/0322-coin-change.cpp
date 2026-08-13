class Solution {
public:

  int solve (vector<int>& coins, int amount,int n, vector<vector<int>> &dp){

    if (amount==0 ) return 0;
     if (n == 0)
        return INT_MAX;

        if (dp[n][amount]!=-1) return dp[n][amount];

    if (coins[n-1]<=amount){
    
    int take = solve (coins, amount - coins[n-1],n,dp);
    int not_take = solve (coins,amount,n-1,dp);
    if (take !=INT_MAX) take =take+1;

   dp[n][amount]= min (take,not_take);
        
    }
    else

 dp[n][amount]= solve (coins,amount,n-1,dp) ;
 return dp[n][amount];

  }
    int coinChange(vector<int>& coins, int amount) {
        int n= coins.size();
vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
   int ans = solve(coins, amount, n,dp);

    return ans == INT_MAX ? -1 : ans;
        
    }
};