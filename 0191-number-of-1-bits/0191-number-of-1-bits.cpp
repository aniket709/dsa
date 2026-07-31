class Solution {
public:
    int hammingWeight(int n) {

        string str="";

       while (n!=0){

        int digit = n%2;
        str.push_back('0'+ digit);

        n=n/2;
       }
       int cnt=0;

        for (int i=0;i<str.length();i++){

            if (str[i]=='1') cnt++;
        }

        return cnt;
        
    }
};