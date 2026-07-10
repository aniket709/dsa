class Solution {
public:

    void bfs(vector<vector<char>>& board,
             vector<vector<bool>>& visited,
             int row, int col) {

        int n = board.size();
        int m = board[0].size();

        queue<pair<int,int>> q;

        int delRow[] = {-1, 1, 0, 0};
        int delCol[] = {0, 0, -1, 1};

        q.push({row, col});
        visited[row][col] = true;

        while (!q.empty()) {

            int row = q.front().first;
            int col = q.front().second;
            q.pop();

            for (int k = 0; k < 4; k++) {

                int newRow = row + delRow[k];
                int newCol = col + delCol[k];

                if (newRow >= 0 && newRow < n &&
                    newCol >= 0 && newCol < m &&
                    !visited[newRow][newCol] &&
                    board[newRow][newCol] == 'O') {

                    visited[newRow][newCol] = true;
                    q.push({newRow, newCol});
                }
            }
        }
    }

    void solve(vector<vector<char>>& board) {

        int n = board.size();
        int m = board[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        // First row and last row
        for (int j = 0; j < m; j++) {

            if (!visited[0][j] && board[0][j] == 'O')
                bfs(board, visited, 0, j);

            if (!visited[n - 1][j] && board[n - 1][j] == 'O')
                bfs(board, visited, n - 1, j);
        }

       
        for (int i = 0; i < n; i++) {

            if (!visited[i][0] && board[i][0] == 'O')
                bfs(board, visited, i, 0);

            if (!visited[i][m - 1] && board[i][m - 1] == 'O')
                bfs(board, visited, i, m - 1);
        }

      
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (board[i][j] == 'O' && !visited[i][j]) {
                    board[i][j] = 'X';
                }
            }
        }
    }
};