class Solution {
public:
     void markRowCol(vector<vector<int>>& matrix, int row, int col) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int j = 0; j < m; j++) {
        if (matrix[row][j] != 0)
            matrix[row][j] = 99999;
    }

    for (int i = 0; i < n; i++) {
        if (matrix[i][col] != 0)
            matrix[i][col] = 99999;
    }
}

void setZeroes(vector<vector<int>>& matrix) {
    int n = matrix.size();
    int m = matrix[0].size();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 0) {
                markRowCol(matrix, i, j);
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] == 99999) {
                matrix[i][j] = 0;
            }
        }
    }
}

};