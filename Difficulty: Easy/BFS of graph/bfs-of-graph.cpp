class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
       
         vector<int> ans;
           int n= adj.size();
         
         vector<bool> visited(n,0);
         
         queue<int> q;
          
          for (int i=0;i<n;i++){
              
              if (!visited[i]){
                  
                q.push(i);
              visited[i]=1;
              }
              
              while (!q.empty()){
                  int node = q.front();
                  ans.push_back(node);
                  q.pop();
                  for (auto it : adj[node]){
                      if(!visited[it]){
                            visited[it]=1;
                          q.push(it);
                    
                      }
                    
                     
                  }
              }
              
              
          }
        return ans;
    }
};