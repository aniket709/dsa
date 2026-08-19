class Solution {
  public:
  bool isPalindrome(string &s, int i, int j) {
      while (i < j) {
          if (s[i] != s[j])
              return false;
          i++;
          j--;
      }
      return true;
  }

  int solve(string &s, int i,  vector<int>& dp) {

      int n = s.length();

      if (i == n)
          return 0;

      if (dp[i] != -1)
          return dp[i];

      int mini = INT_MAX;

      for (int j = i; j < n; j++) {

          if (isPalindrome(s, i, j)) {

              int cuts = 1 + solve(s, j + 1, dp);

              mini = min(mini, cuts);
          }
      }

      return dp[i] = mini;
  }
    int palPartition(string &s) {

        int n = s.length();

        vector<int> dp(n, -1);

        return solve(s, 0, dp) - 1;
    
    }
};