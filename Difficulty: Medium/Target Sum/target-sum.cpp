class Solution {
  public:
    int totalWays(vector<int>& arr, int diff) {
        int n= arr.size();
        
         
        int sum=0;
        for (int it : arr) sum+=it;
        
       if ((sum + diff) % 2 != 0)
        return 0;

    if (sum < diff)
        return 0;

     int  target = (sum + diff) / 2;
    //   int n= arr.size();
       
       vector<vector<int>>dp(n+1,vector<int>(target+1,-1));
       
       for (int i=0;i<n+1;i++){
           for (int j=0;j<target+1;j++){
               
               if (i==0) dp[i][j]=0;
               if (j==0) dp[i][j]=1;
           }
       }
       
           for (int i=1;i<n+1;i++){
             for (int j=0;j<target+1;j++){
                 
                 if (arr[i-1]<=j){
                     dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j];
                 }
                 else{
                    dp[i][j]=  dp[i-1][j];
                 }
           }
           }
       
       
      
       return dp[n][target];
        
        
    }
};