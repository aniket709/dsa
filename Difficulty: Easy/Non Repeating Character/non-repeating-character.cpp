
class Solution {
  public:
    char nonRepeatingChar(string &s) {

    for (int i = 0; i < s.length(); i++) {

        bool repeated = false;

        for (int j = 0; j < s.length(); j++) {

            if (i != j && s[i] == s[j]) {
                repeated = true;
                break;
            }
        }

        if (!repeated) {
            return s[i];
        }
    }

    return '$';
}
};