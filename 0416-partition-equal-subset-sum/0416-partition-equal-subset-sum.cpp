class Solution {
public:
//   bool solve(vector<int>& nums,int n,int target, vector<vector<int>>&dp){

//         if (n==0 && target==0) return 1;
//         if (n==0 && target!=0) return 0;

//         if (dp[n][target]!=-1) return dp[n][target];

//         if (nums[n-1]<=target){

//        dp[n][target]= solve (nums,n-1,target-nums[n-1],dp)|| solve (nums,n-1,target,dp);
//         }
//         else{
//      dp[n][target] = solve (nums,n-1,target,dp);
//         }
//         return dp[n][target];
//   }
    bool canPartition(vector<int>& nums) {

        int sum=0;
        int n= nums.size();
        for (auto it : nums) sum+=it;
        
        if (sum%2!=0) return false;

        int target = sum/2;

        vector<vector<int>>dp (n+1,vector<int>(target+1,-1));

        for (int i=0;i<n+1;i++){
            for (int j=0;j<target+1;j++){

                if (i==0) dp[i][j]= false;
                if (j==0) dp[i][j]=true;

            }
        }
         for (int i=1;i<n+1;i++){
            for (int j=1;j<target+1;j++){

                if (nums[i-1]<=j){

               dp[i][j] = dp[i - 1][j - nums[i - 1]] || dp[i - 1][j];
                }
                else{

                    dp[i][j] = dp[i - 1][j];
                }
            }
         }
return  dp[n][target];
    }
};