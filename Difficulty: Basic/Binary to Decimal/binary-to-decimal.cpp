class Solution {
  public:
    int binaryToDecimal(string& b) {
        

    int i = b.length() - 1;
    int power = 0;
    int sum = 0;

    while (i >= 0) {
        if (b[i] == '1') {
            sum += pow(2, power);
        }

        power++;
        i--;
    }

    return sum;

    }
};