class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {

        int i=0,j=0,n=nums.size();

        int maxi =0;

        while ( j < n){

            if (nums[j]==1){
                maxi = max (maxi,j-i+1);
            
            }
              
              else{

                i=j+1;
              }
    j++;
            }

return maxi;
        
    }
};