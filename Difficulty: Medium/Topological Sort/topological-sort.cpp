class Solution {
  public:
  
    void dfs (int node,int vis[], stack<int> &st,
        vector<vector<int>> &adj){
            
            vis[node]=1;
            
            for (auto it : adj[node]){
                
                if (!vis[it]){
                    dfs (it,vis,st,adj);
                }
            }
            
            st.push(node);
        
        
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
      
       vector<int> ans;
       stack<int> st;
        int vis[V]={0};
        
        vector<vector<int>> adj(V);
       for (int i = 0 ; i < edges.size() ; i++) {
         int a = edges[i][0] ;
          int b = edges[i][1];
             adj[a].push_back(b) ;
 
}
        
        for (int i=0;i<V;i++){
            if(!vis[i]){
                
                dfs (i,vis,st,adj);
            }
        }
      
      while (!st.empty()){
          
          ans.push_back(st.top());
          st.pop();
      }
      return ans;
        
    }
};