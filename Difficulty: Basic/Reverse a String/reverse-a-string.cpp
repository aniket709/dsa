class Solution {
  public:
    string rstring(string& s, int n) {

        if (n == 0)
            return "";

        return s[n - 1] + rstring(s, n - 1);
    }

    string reverseString(string& s) {

        int n = s.length();

        return rstring(s, n);
    
        
    }
};
