class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int mx = 2048;      
        vector<int>v(mx, false);
        vector<int>v1(mx, false);
        int n = nums.size();

        for(int i = 0; i<nums.size(); i++){
            for(int j = i; j<n; j++){
                    v[(nums[i]^nums[j])]=true;
                }
        }

        for(int i = 0; i<mx; i++){
            if(v[i]){
            for(int j = 0; j<n; j++){
                    v1[i^nums[j]] = true;
                }
            }
        }

        int cnt = 0;
        for(auto it:v1){
            if(it) cnt++;
        }

        return cnt;
    }
};