class Solution {
public:
  void dfs(int row, int col,
         vector<vector<int>>& image,
         int initialColor,
         int color) {

    int n = image.size();
    int m = image[0].size();

    image[row][col] = color;

    int delrow[] = {-1, 1, 0, 0};
    int delcol[] = {0, 0, -1, 1};

    for (int i = 0; i < 4; i++) {

        int newrow = row + delrow[i];
        int newcol = col + delcol[i];

        if (newrow >= 0 && newrow < n &&
            newcol >= 0 && newcol < m &&
            image[newrow][newcol] == initialColor) {

            dfs(newrow, newcol, image, initialColor, color);
        }
    }
}
    vector<vector<int>> floodFill(vector<vector<int>>& image,
                              int sr, int sc, int color) {

    if (image[sr][sc] == color)
        return image;

    int initialColor = image[sr][sc];

    dfs(sr, sc, image, initialColor, color);

    return image;

        
    }
};