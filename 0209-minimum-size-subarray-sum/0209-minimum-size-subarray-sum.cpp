class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {

        int i=0,j=0,n=nums.size(),sum=0;
        int mini = INT_MAX;

        while ( j < n){

            sum+=nums[j];

            if (sum>=target){
                while (sum >=target){
                mini = min (j-i+1,mini);
                    sum-=nums[i];
                    i++;
                }
               
            }
            j++;
        }

        return mini==INT_MAX ? 0: mini;
    }
};