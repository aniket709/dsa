class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        unordered_map<int,int> mp;
         
         mp[0]=1;
         int currsum=0;
         int cnt=0,j=0;

         while (j < nums.size()){
            currsum+=nums[j];

            int target = currsum-k;

            if (mp.find(target)!=mp.end()){

                cnt += mp[target];
            }
            mp[currsum]++;
            j++;

         }
        return cnt;
    }
};