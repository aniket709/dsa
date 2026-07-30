class Solution {
  public:
    string getBinaryRep(int n) {
        
        string str = "";

    if (n == 0)
        return string(32, '0');

    while (n != 0) {

        int digit = n % 2;
        str.push_back('0' + digit);

        n = n / 2;
    }

    reverse(str.begin(), str.end());

    while (str.length() < 32) {
        str = '0' + str;
    }

    return str;

        
    }
};