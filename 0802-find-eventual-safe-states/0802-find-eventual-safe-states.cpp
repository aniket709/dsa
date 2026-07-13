class Solution {
public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {

        int n= graph.size();
        // int indegree[n]={0};
         vector<int>indegree(n,0);
         vector<vector<int>> rgraph(n);

        queue<int>q;
        vector<int>ans;

         for (int i=0;i<n;i++){
            for (auto it : graph[i]){
             rgraph[it].push_back(i);
                indegree[i]++;
            }
         }
          for (int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
          }
          while (!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for (auto it : rgraph[node]){
                indegree[it]--;
                if (indegree[it]==0){
                    q.push(it);
                }
            }
          }

         sort (ans.begin(),ans.end());

return ans;
        
    }
};