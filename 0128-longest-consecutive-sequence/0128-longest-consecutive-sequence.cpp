class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int maxLen = 0;

        for (int num : st) {

            if (st.count(num - 1) == 0) {

                int currNum = num;
                int currLen = 1;

                while (st.count(currNum + 1)) {
                    currNum++;
                    currLen++;
                }

                maxLen = max(maxLen, currLen);
            }
        }

        return maxLen;
    
        
    }
};