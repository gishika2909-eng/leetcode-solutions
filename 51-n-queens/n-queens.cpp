class Solution {
public:
    vector<vector<string>> ans;

    void solve(int row, int n, vector<string>& board,
               vector<int>& col, vector<int>& diag1, vector<int>& diag2) {

        if (row == n) {
            ans.push_back(board);
            return;
        }

        for (int j = 0; j < n; j++) {

            if (col[j] || diag1[row - j + n - 1] || diag2[row + j])
                continue;

            board[row][j] = 'Q';
            col[j] = 1;
            diag1[row - j + n - 1] = 1;
            diag2[row + j] = 1;

            solve(row + 1, n, board, col, diag1, diag2);

            board[row][j] = '.';
            col[j] = 0;
            diag1[row - j + n - 1] = 0;
            diag2[row + j] = 0;
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<string> board(n, string(n, '.'));

        vector<int> col(n, 0);
        vector<int> diag1(2 * n - 1, 0);
        vector<int> diag2(2 * n - 1, 0);

        solve(0, n, board, col, diag1, diag2);

        return ans;
    }
};