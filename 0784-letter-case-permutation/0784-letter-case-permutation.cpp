class Solution {
public:
 void solve (int i, vector<string>&ans,string s,string op){

    if (i==s.length()){
        ans.push_back(op);
        return ;
    }

    
    char ch = s[i];

    if (isalpha(ch)){

        string op1 = op;
        op1.push_back(tolower(ch));
        solve (i+1,ans,s,op1);


         string op2 = op;
        op2.push_back(toupper(ch));
        solve (i+1,ans,s,op2);

    }

    else{

        string op3 = op;
        op3.push_back(ch);
        solve (i+1,ans,s,op3);
    }

 }
    vector<string> letterCasePermutation(string s) {

        vector<string> ans;
        string op="";
        solve (0,ans,s,op);
        return ans;
        
    }
};