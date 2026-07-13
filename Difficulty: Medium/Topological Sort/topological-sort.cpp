class Solution {
  public:
  
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
      
       vector<int> ans;
      queue<int> q;
        int indegree[V]={0};
        
        vector<vector<int>> adj(V);
       for (int i = 0 ; i < edges.size() ; i++) {
         int a = edges[i][0] ;
          int b = edges[i][1];
             adj[a].push_back(b) ;

}
          
          for (int i=0;i<V;i++){
              
              for (auto it : adj[i]){
                  
                  indegree[it]++;
              }
          }
          
          for (int i=0;i<V;i++){
              
              if (indegree[i]==0){
                  q.push(i);
              }
          }
          
              while (!q.empty()){
              int x = q.front();
              ans.push_back(x);
               q.pop();
              for (auto it : adj[x]){
                  indegree[it]--;
                  if (indegree[it]==0){
                      q.push(it);
                  }
              }
          }
          
         
         return ans;
        
        
    }
};