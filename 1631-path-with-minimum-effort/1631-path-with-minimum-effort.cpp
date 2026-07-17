class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {

        int n = heights.size();
        int m = heights[0].size();
        vector<vector<int>>distance(n,vector<int>(m,INT_MAX));

        distance[0][0]=0;
     priority_queue<
    pair<int,pair<int,int>>,
    vector<pair<int,pair<int,int>>>,
    greater<pair<int,pair<int,int>>>
> q;
        q.push({0,{0,0}});
         int delrow[]={-1,1,0,0};
         int delcol[]={0,0,-1,1};
         while (!q.empty()){
            auto it = q.top();
    q.pop();

    int diff = it.first;
    int row = it.second.first;
    int col = it.second.second;

            if (row == n-1 && col ==m-1) return diff;

            for (int i=0;i<4;i++){
                int nrow= row + delrow[i];
                int ncol = col + delcol[i];

                if (nrow >=0 && nrow < n && ncol >=0 && ncol < m
              ){
                int newEffort = max (abs (heights[row][col] - heights[nrow][ncol]),diff);
                if (newEffort < distance[nrow][ncol]){
                 distance[nrow][ncol] = newEffort;
                  q.push({newEffort,{nrow,ncol}});
                }
                }
            }
         }
return 0;
        
    }
};