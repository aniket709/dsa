class Solution {
  public:
  
  string binary(int n) {
    string str = "";

    while (n != 0) {
        int digit = n % 2;

        str.push_back('0' + digit);

        n = n / 2;
    }

    reverse(str.begin(), str.end());

    return str;
}

void setBit(string &str, int k) {
  
    int index = str.length() - 1 - k;

    
    if (index < 0) {
        str = string(k - str.length() + 1, '0') + str;
        index = 0;
    }

    str[index] = '1';
}

int decimal(string &str) {

    int i = str.length() - 1;
    int power = 0;
    int sum = 0;

    while (i >= 0) {

        if (str[i] == '1') {
            sum += pow(2, power);
        }

        power++;
        i--;
    }

    return sum;
}

int setKthBit(int n, int k) {

   
    string str = binary(n);


    setBit(str, k);

    
    int sum = decimal(str);

    return sum;

    }
};
