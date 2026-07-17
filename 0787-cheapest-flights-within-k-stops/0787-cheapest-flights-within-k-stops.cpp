class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {

        vector<int> distance(n,INT_MAX);
        queue<pair<int,pair<int,int>>> q;
        vector<pair<int,int>> adj[n];

         for (auto it : flights){
            int u = it[0];
            int v= it[1];
            int wt = it[2];
            adj[u].push_back({v,wt});
         }

        distance[src]=0;
        q.push({0,{src,0}});
        while (!q.empty()){
            int stops = q.front().first;
            int  node = q.front().second.first;
            int wt = q.front().second.second;
            q.pop();

            if (stops > k) continue;

            for (auto it : adj[node]){

                int adjNode = it.first;
                int edgeweight = it.second;

                if (wt + edgeweight < distance[adjNode] && k >=stops){
                    distance[adjNode]=wt + edgeweight;
                    q.push({stops+1,{adjNode,wt+edgeweight}});
                }
            }
        }
        if (distance[dst]==INT_MAX) return -1;

        return distance[dst];
    }
};