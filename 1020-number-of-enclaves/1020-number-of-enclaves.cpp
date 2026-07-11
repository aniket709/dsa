class Solution {
public:
   void bfs(vector<vector<int>>& grid,
         vector<vector<bool>>& visited,
         int i, int j) {

    int n = grid.size();
    int m = grid[0].size();

    queue<pair<int,int>> q;
    q.push({i,j});
    visited[i][j] = true;

    int delrow[] = {-1,1,0,0};
    int delcol[] = {0,0,-1,1};

    while(!q.empty()){

        auto [row,col] = q.front();
        q.pop();

        for(int k=0;k<4;k++){

            int newrow = row + delrow[k];
            int newcol = col + delcol[k];

            if(newrow>=0 && newrow<n &&
               newcol>=0 && newcol<m &&
               !visited[newrow][newcol] &&
               grid[newrow][newcol]==1){

                visited[newrow][newcol]=true;
                q.push({newrow,newcol});
            }
        }
    }
}
     
    int numEnclaves(vector<vector<int>>& grid) {

        int n= grid.size(),m=grid[0].size(),cnt=0;
        vector<vector<bool>>visited(n,vector<bool>(m,0));

      
          for (int j=0;j<m;j++){

           if (!visited[0][j] && grid[0][j]==1){
              
              bfs(grid,visited,0,j);
           }
           if (!visited[n-1][j] && grid[n-1][j]==1){

             bfs (grid,visited,n-1,j);
           }
          }

           for (int i=0;i<n;i++){

            if (!visited[i][0] && grid[i][0]==1){
                bfs (grid,visited,i,0);
            }
             if (!visited[i][m-1] && grid[i][m-1]==1){
                bfs(grid,visited,i,m-1);
            }
           }

        //  int cnt = 0;

       for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        if(grid[i][j]==1 && !visited[i][j])
            cnt++;
    }
}

return cnt;

      
    }
};