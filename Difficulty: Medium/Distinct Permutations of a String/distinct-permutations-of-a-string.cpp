class Solution {
  private:
    void solve(string s, vector<string> &str, int idx){
        if(idx >= s.length()){
            str.push_back(s);
            return;
        }
        
        for(int i=idx; i<s.length(); i++){
            swap(s[i], s[idx]);
            solve(s, str, idx+1);
            swap(s[i], s[idx]);
        }
    }
  public:
    vector<string> findPermutation(string &s) {
        // Code here
        vector<string> str;
        int idx=0;
        solve(s, str, idx);
        sort(str.begin(), str.end());
        str.erase(unique(str.begin(), str.end()), str.end());
        return str;
    }
};
