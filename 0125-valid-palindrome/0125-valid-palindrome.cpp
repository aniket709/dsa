class Solution {
public:
  bool checkPalindrome(string str){

    int i=0,j=str.length()-1;

    while ( j >=i){

        if (str[j]!=str[i]){
            return false;
        }
        i++;
        j--;
    }

    return true;



  }
    bool isPalindrome(string s) {

        string str="";

        if (s.length()==0) return true;

        for (int i=0;i<s.length();i++){

            if (isalnum(s[i])){
  
            str.push_back(tolower(s[i]));
            }
        }

        return checkPalindrome(str);
        
    }
};