class Solution {
public: 
  void generate(int open,int close , string op,vector<string> &ans){


      if (open==0 && close==0) {
         ans.push_back(op);
          return ;
      }

  if (open !=0){

    string op1= op;
    op1.push_back('(');
    generate (open-1,close,op1,ans);

  }

  if (close > open ){
    string op2=op;
    op2.push_back(')');
    generate (open,close-1,op2,ans);
  }

}
    vector<string> generateParenthesis(int n) {

int open=n;
int close = n;
 vector<string> ans;

 string op="";

 generate (open,close,op,ans);
 return ans;

        
    }
};