class Solution {
public:
 void solve (vector<int>& nums, vector<vector<int>> &ans,vector<int> output,int start){



        ans.push_back(output);

    for (int i=start ;i<nums.size();i++){
         if (i > start && nums[i] == nums[i - 1])
            continue;

          output.push_back(nums[i]);
          solve (nums,ans,output,i+1);
           output.pop_back();  
    }



 }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> output;

        sort (nums.begin(),nums.end());


        solve (nums,ans,output,0);

        return ans;
        
    }
};