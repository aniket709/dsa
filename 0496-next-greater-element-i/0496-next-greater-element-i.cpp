class Solution {
public:
   vector<int> nextGreaterElementToRight(vector<int>& nums2){
   stack<int> st;
   vector<int> element;
    for (int i = nums2.size() - 1; i >= 0; i--) {

        while (!st.empty() && st.top() <= nums2[i]) {
            st.pop();
        }

        if (st.empty()) {
            element.push_back(-1);
        } else {
            element.push_back(st.top());
        }

        st.push(nums2[i]);
    }

    reverse(element.begin(), element.end());
    return element;
   }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> ans;
        vector<int>index;
        vector<int> element=nextGreaterElementToRight(nums2);

        for (int i = 0; i < nums1.size(); i++) {

        for (int j = 0; j < nums2.size(); j++) {

            if (nums1[i] == nums2[j]) {
                ans.push_back(element[j]);
                break;
            }
        }
    }

    return ans;
    }
};