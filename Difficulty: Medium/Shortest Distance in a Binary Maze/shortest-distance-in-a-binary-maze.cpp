class Solution {
  public:
    int shortestPath(vector<vector<int>> &mat, vector<int> &src, vector<int> &dest) {
        
        
        int n= mat.size();
        int m= mat[0].size();
        
        if (mat[src[0]][src[1]] == 0)
        return -1;
       
         vector<vector<int>> dist(n, vector<int>(m, INT_MAX));
      
        queue<pair<int, pair<int,int>>> q;

        dist[src[0]][src[1]] = 0;
        
       q.push({0,{src[0],src[1]}});
        
        int delrow[]={-1,1,0,0};
        int delcol[]={0,0,-1,1};
        
         while (!q.empty()){
             int distance = q.front().first;
             int row = q.front().second.first;
             int col = q.front().second.second;
             q.pop();
             
               if (row == dest[0] && col == dest[1])
                            return distance;
             for (int i=0;i<4;i++){
                 
                 int nrow = row + delrow[i];
                 int ncol = col + delcol[i];
                 
                 if (nrow >=0 && nrow < n && ncol>=0 && ncol < m && mat[nrow][ncol]==1
                 && distance+1 < dist[nrow][ncol]){
                     
                         dist[nrow][ncol]=distance +1;
                      
                         q.push({distance+1,{nrow,ncol}});
                     
                 }
             }
         }
        return -1;
        
    }
};
