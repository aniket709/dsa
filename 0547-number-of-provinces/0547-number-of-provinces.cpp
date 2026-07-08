class Solution {
public:
  void dfs (vector<vector<int>>& isConnected,int node, vector<bool> &visited){
        
            visited[node]=1;
             int n= isConnected.size();

         for (int j = 0; j < n; j++) {

            if (isConnected[node][j] == 1 && !visited[j]) {
                dfs(isConnected, j, visited);
            }
         }

  }
    int findCircleNum(vector<vector<int>>& isConnected) {

        int cnt=0;
         int n= isConnected.size();
         vector<bool> visited(n,0);

        for (int i=0;i<n;i++){
         
           if(!visited[i]){
              cnt++;
            dfs (isConnected,i,visited);
           }
        }
        return cnt;
    }
};