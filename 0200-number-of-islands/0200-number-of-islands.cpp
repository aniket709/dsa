class Solution {
public:
    void dfs(vector<vector<char>>& grid,
         int row,
         int col,
         vector<vector<bool>>& visited) {

    int n = grid.size();
    int m = grid[0].size();

    if (row < 0 || row >= n || col < 0 || col >= m)
        return;

    if (grid[row][col] == '0' || visited[row][col])
        return;

    visited[row][col] = true;

    dfs(grid, row + 1, col, visited);
    dfs(grid, row - 1, col, visited);
    dfs(grid, row, col + 1, visited);
    dfs(grid, row, col - 1, visited);
}
    int numIslands(vector<vector<char>>& grid) {

        int n= grid.size();
        int m= grid[0].size();
       vector<vector<bool>>visited(n,vector<bool>(m,0));
       int cnt=0;
       
       for (int i=0;i<n;i++){

        for (int j=0;j<m;j++){

            if (grid[i][j]=='1' && !visited[i][j]){
                  cnt++;
                dfs (grid,i,j,visited);
            }
        }  
       }
    return cnt;
        
    }
};