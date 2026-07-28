class Solution {
  public:
  
    bool isValid(string &s) {
    int n = s.size();
    int segments = 0;
    int i = 0;

    while (i < n) {
      
        if (!isdigit(s[i])) {
            return false;
        }

        int num = 0;
        int digits = 0;

        
        while (i < n && s[i] != '.') {
            if (!isdigit(s[i])) {
                return false;
            }

            
            if (digits == 0 && s[i] == '0' &&
                i + 1 < n && s[i + 1] != '.') {
                return false;
            }

            num = num * 10 + (s[i] - '0');
            digits++;

        
            if (digits > 3) {
                return false;
            }

            i++;
        }

       
        if (num > 255) {
            return false;
        }

        segments++;

        
        if (i < n && s[i] == '.') {
            i++;
            
           
            if (i == n || s[i] == '.') {
                return false;
            }
        }
    }

    return segments == 4;

    }
};