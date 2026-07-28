class Solution {
  public:
    bool checkKthBit(int n, int k) {
        
    string str = "";

    while (n != 0) {
        int digit = n % 2;
        str.push_back('0' + digit);
        n = n / 2;
    }

    if (k < str.length() && str[k] == '1') {
        return true;
    }

    return false;

    
        
    }
};