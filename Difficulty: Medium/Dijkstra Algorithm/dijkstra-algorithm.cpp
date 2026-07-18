class Solution {
  public:
    vector<int> dijkstra(int V, vector<vector<int>> &edges, int src) {
       
       vector<pair<int,int>> adj[V];
        
         for (auto it : edges){
             
             int u = it[0];
             int v= it[1];
             int wt = it[2];
             adj[u].push_back({v,wt});
             adj[v].push_back({u,wt});
         }
         
    priority_queue<
    pair<int,int>,
    vector<pair<int,int>>,
    greater<pair<int,int>>
> pq;
    
    vector<int>distance (V,INT_MAX);
    
    distance[src]=0;
    
     pq.push({0,src});
     
     while (!pq.empty()){
         
         int dist = pq.top().first;
         int node = pq.top().second;
         pq.pop();
         
        for (const auto &it : adj[node]){
             
              int adjNode = it.first;
              int edgeWeight= it.second;
              
              if (dist > distance[node])
    continue;
              
              if (dist + edgeWeight < distance[adjNode]){
                  
                distance[adjNode] =  dist + edgeWeight ;
                 pq.push({distance[adjNode],adjNode});
              }
         }
     }
    
       return distance;
        
    }
};