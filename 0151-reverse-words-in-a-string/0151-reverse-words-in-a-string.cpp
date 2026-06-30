class Solution {
public:
    string reverseWords(string s) {

         string str = "";

    int i = s.length() - 1;
    int j = s.length() - 1;

    while (j >= 0) {

       
        while (j >= 0 && s[j] == ' ')
            j--;

        if (j < 0) break;

       
        i = j;

       
        while (j >= 0 && s[j] != ' ')
            j--;

        if (!str.empty())
            str += ' ';

     
        for (int k = j + 1; k <= i; k++) {
            str += s[k];
        }
    }

    return str;

    }
};