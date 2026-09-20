class Solution {
public:
    string reverseWords(string s) {

        string str = "";
        stack<char> st;

        for (int i = 0; i < s.length(); i++) {

            if (s[i] == ' ') {

                while (!st.empty()) {
                    str += st.top();
                    st.pop();
                }

                str.push_back(' ');

            } else {
                st.push(s[i]);
            }
        }

        while (!st.empty()) {
            str += st.top();
            st.pop();
        }

    
        str.erase(0, str.find_first_not_of(' '));
        str.erase(str.find_last_not_of(' ') + 1);

        return str;
    }
};