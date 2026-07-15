class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {

        int n = grid.size();

        if (grid[0][0] == 1 || grid[n-1][n-1] == 1)
            return -1;

        vector<vector<bool>> visited(n, vector<bool>(n, false));

        queue<pair<pair<int,int>, int>> q;
        q.push({{0, 0}, 1});
        visited[0][0] = true;

        while (!q.empty()) {

            auto it = q.front();
            q.pop();

            int row = it.first.first;
            int col = it.first.second;
            int dist = it.second;

            if (row == n-1 && col == n-1)
                return dist;

            for (int dr = -1; dr <= 1; dr++) {
                for (int dc = -1; dc <= 1; dc++) {

                    if (dr == 0 && dc == 0)
                        continue;

                    int newRow = row + dr;
                    int newCol = col + dc;

                    if (newRow >= 0 && newRow < n &&
                        newCol >= 0 && newCol < n &&
                        !visited[newRow][newCol] &&
                        grid[newRow][newCol] == 0) {

                        visited[newRow][newCol] = true;
                        q.push({{newRow, newCol}, dist + 1});
                    }
                }
            }
        }

        return -1;
    }
};