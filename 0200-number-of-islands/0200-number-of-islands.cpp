class Solution {
public: 
 void dfs (int row,int col , vector<vector<bool>>&visited,vector<vector<char>>& grid ){

        visited[row][col]=true;
        int n = grid.size();
        int m= grid[0].size();

        int delRow[]={-1,1,0,0};
        int delCol[]={0,0,-1,1};
      
        for (int i=0;i<4;i++){

        int newrow = delRow[i] + row;
        int newcol = delCol[i] + col;


       if (newrow >= 0 && newrow < n &&
    newcol >= 0 && newcol < m &&
    !visited[newrow][newcol] &&
    grid[newrow][newcol] == '1')
    {
          

            dfs (newrow,newcol,visited,grid);
        }
      }  
 }
    int numIslands(vector<vector<char>>& grid) {

        int n = grid.size();
        int m= grid[0].size();

         vector<vector<bool>>visited(n,vector<bool>(m,0));
         int cnt=0;

         for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if(!visited[i][j] && grid[i][j]=='1'){
                    dfs (i,j,visited,grid);
                      cnt++;
                }
            }
         }
return cnt;
        
    }
};