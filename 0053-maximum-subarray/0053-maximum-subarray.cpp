class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum=0;
        int maxi =INT_MIN;

        int i=0,j=0,n=nums.size();

        while (j<n ){
            sum+=nums[j];
            maxi = max (sum,maxi);

            if (sum < 0){
                while (sum < 0){
                    sum-=nums[i];
                    i++;
                }
            }
            
        j++;
        }
        return maxi;
    }
};