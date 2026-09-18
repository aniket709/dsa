class Solution {
public:
    bool canJump(vector<int>& nums) {

        int i=0,n=nums.size(),reach=0;

        while (i < n){

            if (i > reach) return false;

            reach = max (reach,nums[i]+i);

            if (reach >=n-1) return true;
            i++;
        }

return true;
        
    }
};