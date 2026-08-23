class Solution {
public:
 void solve (int i,    vector<vector<int>>&ans, vector<int> output,
    vector<int>& nums ){

        if (i==nums.size()) {
            ans.push_back(output);
            return ;
        }

        solve(i+1,ans,output,nums);

        output.push_back(nums[i]);
         solve(i+1,ans,output,nums);



 }
    vector<vector<int>> subsets(vector<int>& nums) {

     vector<vector<int>> ans;
     vector<int> output;

      solve (0,ans,output,nums);

     return ans;
        
    }
};