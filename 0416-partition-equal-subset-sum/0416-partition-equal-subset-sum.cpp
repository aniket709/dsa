class Solution {
public:
  bool solve(vector<int>& nums,int n,int target, vector<vector<int>>&dp){

        if (n==0 && target==0) return 1;
        if (n==0 && target!=0) return 0;

        if (dp[n][target]!=-1) return dp[n][target];

        if (nums[n-1]<=target){

       dp[n][target]= solve (nums,n-1,target-nums[n-1],dp)|| solve (nums,n-1,target,dp);
        }
        else{
     dp[n][target] = solve (nums,n-1,target,dp);
        }
        return dp[n][target];
  }
    bool canPartition(vector<int>& nums) {

        int sum=0;
        int n= nums.size();
        for (auto it : nums) sum+=it;
        
        if (sum%2!=0) return false;

        int target = sum/2;

        vector<vector<int>>dp (n+1,vector<int>(target+1,-1));

       return  solve (nums,n,target,dp);


    }
};