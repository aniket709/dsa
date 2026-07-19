class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {

       int n = mat.size();
int m = mat[0].size();

vector<vector<bool>> visited(n, vector<bool>(m, false));
vector<vector<int>> dist(n, vector<int>(m, 0));

queue<pair<pair<int,int>, int>> q;

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        if (mat[i][j] == 0) {
            q.push({{i, j}, 0});
            visited[i][j] = true;
        }
    }
}

int delrow[4] = {-1, 1, 0, 0};
int delcol[4] = {0, 0, -1, 1};

while (!q.empty()) {

    int row = q.front().first.first;
    int col = q.front().first.second;
    int step = q.front().second;
    q.pop();

    dist[row][col] = step;

    for (int i = 0; i < 4; i++) {

        int newrow = row + delrow[i];
        int newcol = col + delcol[i];

        if (newrow >= 0 && newrow < n &&
            newcol >= 0 && newcol < m &&
            !visited[newrow][newcol]) {

            visited[newrow][newcol] = true;
            q.push({{newrow, newcol}, step + 1});
        }
    }
}

return dist;
    }
};