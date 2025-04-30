class Solution {
public:
    void dfs(vector<vector<char>>& board, vector<vector<int>>& visited, int row,
             int col) {
        int m = board.size();
        int n = board[0].size();
        visited[row][col] = 1;
        int deltaRow[] = {-1, 0, 1, 0};
        int deltaCol[] = {0, 1, 0, -1};

        for (int neighbour = 0; neighbour < 4; neighbour++) {

            int nRow = row + deltaRow[neighbour];
            int nCol = col + deltaCol[neighbour];
            if (nRow >= 0 and nRow < m and nCol >= 0 and nCol < n and
                !visited[nRow][nCol] and board[nRow][nCol] == 'O') {
                dfs(board, visited, nRow, nCol);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int m = board.size();
        if (m == 0) return;

        int n = board[0].size();

        vector<vector<int>> visited(m, vector<int>(n));
        // first row and last row
        int firstRow = 0;
        int lastRow = m - 1;

        for (int col = 0; col < n; col++) {
            if (board[firstRow][col] == 'O' and !visited[firstRow][col]) {
                dfs(board, visited, firstRow, col);
            }
            if (board[lastRow][col] == 'O' and !visited[lastRow][col]) {
                dfs(board, visited, lastRow, col);
            }
        }
        // first col and last col
        int firstCol = 0;
        int lastCol = n - 1;
        for (int row = 0; row < m; row++) {
            if (board[row][firstCol] == 'O' and !visited[row][firstCol]) {
                dfs(board, visited, row, firstCol);
            }
            if (board[row][lastCol] == 'O' and !visited[row][lastCol]) {
                dfs(board, visited, row, lastCol);
            }
        }

        for (int row = 0; row < m; row++) {
            for (int col = 0; col < n; col++) {
                if (board[row][col] == 'O' and !visited[row][col]) {
                    board[row][col] = 'X';
                }
            }
        }
    }
};