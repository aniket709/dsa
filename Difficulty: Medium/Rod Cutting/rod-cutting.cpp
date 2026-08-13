class Solution {
  public:
  int solve (vector<int> &price, vector<int> &val,int n,
  int length, vector<vector<int>>&dp){
      
      if (n==0 ||  val.size()==0) return 0;
      
      if (dp[n][length]!=-1) return dp[n][length];
      
      
      if (val[n-1]<=length){
          
        dp[n][length]= max(
            price[n - 1] + solve(price, val, n, length - val[n - 1],dp),
            solve(price, val, n - 1, length,dp)
        );
      }
      else
          
       dp[n][length]=   solve (price,val,n-1,length,dp);
       return dp[n][length];
     
  }
    int cutRod(vector<int> &price) {
       
       vector<int> val;
       
       for (int i=1;i<=price.size();i++){
           val.push_back(i);
       }
       int n= price.size();
       int length= price.size();
       
       vector<vector<int>>dp(n+1,vector<int>(length+1,-1));
       
      return solve (price,val,n,length,dp);
         
    }
};