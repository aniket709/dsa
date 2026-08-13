class Solution {
public:
 int solve (vector<int>& coins, int amount,int n, vector<vector<int>> &dp){

    if (amount==0 ) return 1;
     if (n == 0)
        return 0;

        if (dp[n][amount]!=-1) return dp[n][amount];

    if (coins[n-1]<=amount){


     dp[n][amount]= solve (coins,amount-coins[n-1],n,dp) + solve (coins,amount,n-1,dp) ;
        
    }
    else

 dp[n][amount]= solve (coins,amount,n-1,dp) ;
 return dp[n][amount];

  }
    int change(int amount, vector<int>& coins) {
        int n= coins.size();
        vector<vector<int>> dp(n+1,vector<int>(amount+1,-1));
        return  solve (coins,amount,n,dp);

        
    }
};