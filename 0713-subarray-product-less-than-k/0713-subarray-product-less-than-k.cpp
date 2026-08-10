class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {

        long long  i=0,j=0,n=nums.size();
        long long product =1;
        int ans=0;

        if (k <= 1) return 0;

        while (j < n){
            product*=nums[j];
            if (product < k){
            }
            if (product >=k){
                while (product >=k){
                    product/=nums[i];
                    i++;
                }
            }
            ans+=(j-i+1);
            j++;
        }

return ans;
        
    }
};