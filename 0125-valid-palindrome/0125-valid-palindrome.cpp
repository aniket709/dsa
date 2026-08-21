class Solution {
public:
void pali(string& s, int i, string& str) {

    if (i >= s.length())
        return;

    if (isalnum(s[i]))
        str.push_back(tolower(s[i]));

    pali(s, i + 1, str);
}

bool solve(string& str, int i) {

    if (i >= str.length() / 2)
        return true;

    if (str[i] != str[str.length() - i - 1])
        return false;

    return solve(str, i + 1);
}

bool isPalindrome(string s) {

    string str = "";

    pali(s, 0, str);

    return solve(str, 0);

        
    }
};