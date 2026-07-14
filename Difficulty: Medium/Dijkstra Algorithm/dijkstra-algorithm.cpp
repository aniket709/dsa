class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
      
         vector<int> ans;
         
          vector<pair<int,int>> adj [V];
          
          for (int i=0;i<edges.size();i++){
              
              int u = edges[i][0];
              int v= edges[i][1];
              int wt = edges[i][2];
              
              adj[u].push_back({v,wt});
              adj[v].push_back({u,wt});
              
          }
        vector<int> dist(V, INT_MAX);
          
          dist[src]=0;
          
          priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> minheap;

  minheap.push({0,src});
  while (!minheap.empty()){
      
   
      int wt = minheap.top().first;
      int node = minheap.top().second;
       minheap.pop();
      
      for (auto it : adj[node]){
          
         int adjNode = it.first;
          int edgeWeight = it.second;
         
         if (wt + edgeWeight < dist[adjNode]){
             
             dist[adjNode] = wt + edgeWeight;
             minheap.push({dist[adjNode],adjNode});
         }
         
      }
  }
     return dist;    
        
    }
};