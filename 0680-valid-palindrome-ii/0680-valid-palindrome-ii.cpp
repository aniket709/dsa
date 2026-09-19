class Solution {
public:
  bool ispalindrome(int start,int last,string& s ){

    while (last > start){

        if (s[start] !=s[last]){
            return false;
        }
        else{
          start++;
        last--;
        }
    }
    return true;

  }

   bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;
        while (i < j) {
            if (s[i] != s[j])
                return ispalindrome( i + 1, j,s) || ispalindrome( i, j - 1,s);
            i++;
            j--;
        }
        return true;
        
    }
};