class Solution {
public:
  void dfs (vector<vector<int>>& image,int row, int col, int newcolor, int delRow[],
     int delCol[], int intialColor, vector<vector<int>>& ans ){

        ans[row][col]=newcolor;

        for (int i=0;i<4;i++){

            int newRow = row+delRow[i];
            int newCol = col+ delCol[i];
        

        int n= image.size();
        int m= image[0].size();

        if (newRow >=0 && newRow < n && newCol >=0 && newCol < m
        && image[newRow][newCol]==intialColor && ans[newRow][newCol]!=newcolor)
        {

            dfs (image,newRow,newCol,newcolor,delRow,delCol,intialColor,ans);
        }
        }

  }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {

         vector<vector<int>> ans=image;
         int intialColor= image[sr][sc];

         int delRow[] = {-1,0,1,0};
         int delCol[]={0,1,0,-1};

         dfs(image,sr,sc,color,delRow,delCol,intialColor,ans);

         return ans;
        
    }
};