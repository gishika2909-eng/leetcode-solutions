class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n = mat.size();
        int sum = 0;

        for(int i = 0; i < n; i++) {
            sum += mat[i][i];           // main diagonal
            sum += mat[i][n - 1 - i];   // other diagonal
        }

        // If n is odd, middle element was added twice
        if(n % 2 == 1)
            sum -= mat[n/2][n/2];

        return sum;
    }
};