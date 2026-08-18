class Solution {
  public:
   int solve (string &s,string &str,int n,int m,
    vector<vector<int>>&dp){
        
       
       if (n==0 || m==0) return 0;
       
       if (dp[n][m]!=-1) return dp[n][m];
       
       if (s[n-1]==str[m-1]){
           
          dp[n][m]= 1 + solve (s,str,n-1,m-1,dp);
       }
       else{
           
           dp[n][m] = max ( 
               solve (s,str,n-1,m,dp),
              solve (s,str,n,m-1,dp)
              );
       }
       return dp[n][m];
       
       
   }
    int minDeletions(string &s) {
        
        string str= s;
        reverse (str.begin(),str.end());
        
        int n= s.length();
        int m=str.length();
        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
       int ans = solve (s,str,n,m,dp);
       
       return (n-ans);
        
        
        
    }
};