class Solution {
  public:
      vector<vector<int>> dp;
      map<pair<int,int>, set<string>> memo;

      set<string> solve(int i, int j, string &s1, string &s2) {

          if (i == 0 || j == 0) {
              return {""};
          }

          if (memo.count({i, j})) {
              return memo[{i, j}];
          }

          set<string> ans;

          if (s1[i - 1] == s2[j - 1]) {

              set<string> temp =
                  solve(i - 1, j - 1, s1, s2);

              for (string s : temp) {
                  ans.insert(s + s1[i - 1]);
              }
          }

          else {

              if (dp[i - 1][j] >= dp[i][j - 1]) {

                  set<string> temp =
                      solve(i - 1, j, s1, s2);

                  for (string s : temp) {
                      ans.insert(s);
                  }
              }

              if (dp[i][j - 1] >= dp[i - 1][j]) {

                  set<string> temp =
                      solve(i, j - 1, s1, s2);

                  for (string s : temp) {
                      ans.insert(s);
                  }
              }
          }

          return memo[{i, j}] = ans;
      }

      vector<string> allLCS(string &s1, string &s2) {

          int n = s1.length();
          int m = s2.length();

          dp.assign(n + 1, vector<int>(m + 1, 0));

          for (int i = 1; i <= n; i++) {
              for (int j = 1; j <= m; j++) {

                  if (s1[i - 1] == s2[j - 1]) {
                      dp[i][j] = dp[i - 1][j - 1] + 1;
                  }
                  else {
                      dp[i][j] =
                          max(dp[i - 1][j], dp[i][j - 1]);
                  }
              }
          }

          memo.clear();

          set<string> result =
              solve(n, m, s1, s2);

          return vector<string>(result.begin(), result.end());
      }
};
