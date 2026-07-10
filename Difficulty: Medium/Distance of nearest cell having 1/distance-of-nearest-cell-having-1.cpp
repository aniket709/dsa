class Solution {
  public:
    vector<vector<int>> nearest(vector<vector<int>>& grid) {
        
      
        int n= grid.size();
        int m= grid[0].size();
      vector<vector<int>> dist(n,vector<int>(m,0));
      
      vector<vector<bool>> visited(n,vector<bool>(m,0));
      
       queue<pair<pair<int,int>,int>> q;
       
        for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                
                if (grid[i][j]==1){
                    
                    q.push({{i,j},0});
                    visited[i][j] = 1; 
                }
                else{
                    visited[i][j]=0;
                    
                }
            }
        }
        
         int delrow[]= {-1,1,0,0};
         int delcol[]= {0,0,-1,1};
        
         while (!q.empty()){
             
             int row = q.front().first.first;
             int col = q.front().first.second;
             int steps= q.front().second;
             q.pop();
             
              dist[row][col]=steps;
              
              for (int k=0;k<4;k++){
                  
                int newRow= row + delrow[k];
                int newCol= col + delcol[k];
                
                
                if ( newRow >=0 && newRow < n && newCol >= 0 
                && newCol < m  && visited[newRow][newCol]==0){
                    
                    visited[newRow][newCol]=1;
                    q.push({{newRow,newCol},steps+1});
                } 
              }
         }
         return dist;
        
    }
};