class Solution {
public:
    int minPairSum(vector<int>& nums) {
        
        sort (nums.begin(),nums.end());

        int i=0,j=nums.size()-1;
        vector<int> sum;

        while (i < j){
            sum.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }

        int maxi =INT_MIN;

        for (auto it : sum){

            maxi = max(maxi,it);
        }

        return maxi;
    }
};