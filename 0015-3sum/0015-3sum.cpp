class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

          vector<vector<int>> ans;
          set<vector<int>> st;
          sort (nums.begin(),nums.end());

          for (int i=0;i<nums.size();i++){

            int left = i+1;
            int right = nums.size()-1;

            while (left < right){

            int sum = nums[i] + nums[left] + nums[right];

              if (sum==0){
                st.insert({nums[i],nums[left],nums[right]});
                left++;
                right--;
              }
              else if (sum > 0){
                right--;
              }
              else{
                left ++;
              }
            }
          }

           for (auto it: st ){
            ans.push_back(it);
           }
        
        return ans;
    }
};