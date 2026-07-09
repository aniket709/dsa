class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        
        int n= grid.size();
        int m= grid[0].size();
        int fresh=0;

         queue<pair<int,int>>q;
         for (int i=0;i<n;i++){
            for (int j=0;j<m;j++){
                if (grid[i][j]==2)
                q.push({i,j});
           else  if (grid[i][j]==1) fresh++;
            }
         }

         if (fresh ==0) return 0;

         int delRow []= {-1,1,0,0};
         int delCol[]={0,0,-1,1};
          
          int minutes=0;

         while (!q.empty()){
            int size = q.size();
            while (size--){
                auto node = q.front();
                q.pop();
                int row = node.first;
                int col = node.second;

                for (int k=0;k<4;k++){
                    int newRow = row + delRow[k];
                    int newCol= col + delCol[k];

                      if (newRow >=0  && newRow < n && newCol >=0 && newCol < m
                       && grid[newRow][newCol]==1){
                        grid[newRow][newCol]=2;
                        fresh--;
                        q.push({newRow,newCol});
                       }
                }
            }
              minutes++;
         }

         if (fresh > 0) return -1;

return minutes -1;


    }
};