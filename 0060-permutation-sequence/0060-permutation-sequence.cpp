class Solution {
public:
  void solve(int i,
           string& input,
           string output,
           vector<string>& ans,
           vector<bool>& used) {

    if (i == input.length()) {
        ans.push_back(output);
        return;
    }

    for (int j = 0; j < input.length(); j++) {

        if (used[j])
            continue;

        used[j] = true;

        solve(i + 1,
              input,
              output + input[j],
              ans,
              used);

        used[j] = false;   
    }
}
    string getPermutation(int n, int k) {

    string input = "";

    for (int i = 1; i <= n; i++) {
        input.push_back('0' + i);
    }

    vector<string> ans;
    vector<bool> used(n, false);

    solve(0, input, "", ans, used);

    return ans[k - 1];
}
};