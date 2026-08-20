class Solution {
public:
 void  solve (vector<int>& nums, vector<int> &ans,int i,int n,int sum){

    if (n <= i) {

        return ;
    }
 sum+=nums[i];
    ans.push_back(sum);

    solve (nums,ans,i+1,n,sum);
  }
    vector<int> runningSum(vector<int>& nums) {

        vector<int> ans;
        int n= nums.size();

        solve (nums,ans,0,n,0);
        return ans;
        
    }
};