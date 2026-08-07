class Solution {
public:
    int maxSubArray(vector<int>& nums) {

        int maxi =INT_MIN;
        int ans=0;
        int sum=0;
        int i=0,j=0,n=nums.size();

        while (j < n){

            sum+=nums[j];
            // int window = j-i+1;

            if (sum > maxi){
                
                maxi = max (sum,maxi);
            }

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