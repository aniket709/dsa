class Solution {
  public:
   void solve (string &s, vector<string> &ans,
     string &output,int i){
       
        if (i >=s.length()){
            
            ans.push_back(output);
            return;
        }
        
         solve (s,ans,output,i+1);
         
         output.push_back(s[i]);
         
         solve (s,ans,output,i+1);
             output.pop_back();
       
   }
    vector<string> powerSet(string &s) {
     
       vector<string> ans;
          string output="";
         
         solve (s,ans,output,0);
         sort (ans.begin(),ans.end());
         return ans;
         
        
    }
};