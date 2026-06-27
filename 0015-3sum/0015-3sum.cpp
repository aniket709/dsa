class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        vector<vector<int>> ans;
        set < vector < int > > st1;

        sort (nums.begin(),nums.end());

        for (int i=0;i<nums.size()-2;i++){

            int start = i+1;

            int end = nums.size()-1;

          

            while (start < end && i !=start && start !=end){
                  int sum = nums[i] + nums[start] + nums[end];
              
              if (sum==0){
                st1.insert({nums[i],nums[start],nums[end]});
                start++;
                end--;
              }
              else if (sum > 0){
                end--;
              }
              else{
                start++;
              }

            }
        }
         
  for (auto it : st1){
    ans.push_back(it);
  }
return ans;
        
    }
};