class Solution {
public:
    int numSubarrayBoundedMax(vector<int>& nums, int left, int right) {

        int i=0,j=0,cnt=0,maxi=0,n=nums.size();

        while (j < n){
            if (nums[j]>right){
                maxi=0;
                i=j+1;
            }

            else if (nums[j]<=right && nums[j] >=left){
                maxi = j-i+1;
                // j++;
            }
            cnt+=maxi;
                j++;
        }
    
return cnt;
        
    }
};