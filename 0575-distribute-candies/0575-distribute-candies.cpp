class Solution {
public:
    int distributeCandies(vector<int>& candyType) {

        set<int> st;

        int n= candyType.size()/2;

        for (auto it : candyType){
            st.insert(it);
        }

        if (st.size()>= n){
            return n;
        }

        else 

        return st.size();
        
    }
};