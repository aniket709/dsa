class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> ans;
            
           if (nums.size() == 0) {
        return;
    }

    k = k % nums.size();

    if (k == 0) {
        return;
    }
         for (int i=nums.size()-k;i<nums.size();i++){
            ans.push_back(nums[i]);
         }

          for (int i=0;i<nums.size()-k;i++){
            ans.push_back(nums[i]);
          }

         

          nums.clear();

          for (int i=0;i<ans.size();i++){
            
            nums.push_back(ans[i]);
          }
        
    }
};