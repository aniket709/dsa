class Solution {
public:
    bool isAnagram(string s, string t) {

        sort(s.begin(),s.end());
        sort(t.begin(),t.end());

        int i=0;
        int j=0;

        while (i < s.length() || j< t.length() ){

            if(s[i]!=t[j]){
                return false;
            }
            else{
                i++;
                j++;
            }
        }
        return true;
    }
};