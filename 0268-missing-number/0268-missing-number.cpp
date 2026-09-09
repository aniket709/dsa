class Solution {
public:
    int missingNumber(vector<int>& nums) {

        // if (nums.size()==1 && nums[0]==1) return 0;
        // if (nums.size()==1 && nums[0]==0) return 1;

        int sum = 0;
        int n= nums.size();
        for (auto it : nums) sum+=it;
        int allsum=0;
        allsum = n *(n+1)/2;

        if (allsum  - sum > 0 ) return allsum-sum;

         else if (allsum  - sum == 0) return 0;

        return n+1; 
        
    }
};