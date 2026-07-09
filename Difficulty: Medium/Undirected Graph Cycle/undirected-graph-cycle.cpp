class Solution {
  public:
    bool isCycle(int V, vector<vector<int>>& edges) {
        
        int n=edges.size();
        int m= edges[0].size();
           vector<vector<int>> adj(V);
        for (int i = 0; i < edges.size(); i++) {

        int u = edges[i][0];
        int v = edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(V, false);
       
        queue<pair<int,int>> q;
        for (int i=0;i<n;i++){
            if (!visited[i]){
                q.push({i,-1});
                visited[i]=true;
               while (!q.empty()){
                int node = q.front().first;
                int parent = q.front().second;
                q.pop();
                 for (auto it : adj[node]){
                     
                     if (!visited[it]){
                         visited[it]=1;
                         
                         q.push({it,node});
                     }
                     else if (parent!=it) return true;
                 }
                
            }
            }
            
        }
        return false;
        
    }
};