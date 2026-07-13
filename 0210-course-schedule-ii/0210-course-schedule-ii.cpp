class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {

         vector<int>  ans;
        vector<vector<int>> adj(numCourses);

         for (auto it : prerequisites){
            adj[it[1]].push_back(it[0]);
         }
         vector<int> indegree(numCourses,0);

         for (int i = 0; i < numCourses; i++)
        for (auto it : adj[i])
            indegree[it]++;

         queue<int> q;

          for (int i=0;i<numCourses;i++){
            if(indegree[i]==0){
                q.push(i);
            }
          }
          while(!q.empty()){
            int node  = q.front();
            ans.push_back(node);
            q.pop();
             for (auto it : adj[node ]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
             }
          }

    //    reverse(ans.begin(),ans.end());

    if (ans.size() != numCourses)
    return {};

return ans;
        
    }
};