class Solution {
  public:
    string decToBinary(int n) {
        
        string str="";
        
       
       while (n!=0){
           
           int digit = n%2;
              
            str.push_back('0' + digit);
           
           n=n/2;
           
       }
       
       reverse (str.begin(),str.end());
       
       return str;
        
    }
};