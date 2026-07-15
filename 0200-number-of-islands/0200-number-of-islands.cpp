class Solution {
public:
 void bfs (int row,int col , vector<vector<bool>> &visited ,vector<vector<char>>& grid){
         int n = grid.size();
        int  m = grid[0].size();
       queue<pair<int,int>> q;
          int delrow[] ={-1,1,0,0};
          int delcol[]={0,0,-1,1};

          q.push({row,col});

           while (!q.empty()){
            int row = q.front().first;
            int col = q.front().second;
              q.pop();
              for (int i=0;i<4;i++){
                int nrow = delrow[i] + row;
                int ncol = delcol[i] + col;

                if (nrow >=0 && nrow < n && ncol >=0 && ncol< m && !visited[nrow][ncol] && grid[nrow][ncol]=='1'){
                    visited[nrow][ncol]=true;
                    q.push({nrow,ncol});
                }
              }
             
         }

 }
    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int  m = grid[0].size();
        int cnt=0;
         vector<vector<bool>> visited(n,vector<bool>(m,0));
      
         
         for (int i =0;i<n;i++){
            for (int j=0;j<m;j++){
                if ( !visited[i][j] && grid[i][j]=='1'){
                    visited[i][j]= true;
                   cnt++;
                   bfs (i,j,visited,grid);
                }
            }
         }
          

return cnt;
        
    }
};