class Solution {
public:
    int majorityElement(vector<int>& nums) {

        if (nums.size()==1) return nums[0];

        sort (nums.begin(),nums.end());
        int ans=0;

        int cnt=1;

         for (int i=1;i<nums.size();i++){
            if (nums[i-1]==nums[i]) {
                cnt++;
              
              if (cnt > nums.size()/2){
                ans=nums[i];
              }
                
            }
            else{
                cnt=1;
            }


         }
         return ans;
        
    }
};