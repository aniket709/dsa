class Solution {
  public:
  
    void dfs(vector<vector<int>> &adj,
         int node,
         vector<int> &ans,
         vector<bool> &visited) {

    visited[node] = true;
    ans.push_back(node);

    for (int it : adj[node]) {

        if (!visited[it]) {
            dfs(adj, it, ans, visited);
        }
    }
}

vector<int> dfs(vector<vector<int>> &adj) {

    int n = adj.size();

    vector<int> ans;
    vector<bool> visited(n, false);

    for (int i = 0; i < n; i++) {

        if (!visited[i]) {
            dfs(adj, i, ans, visited);
        }
    }

    return ans;
}
};