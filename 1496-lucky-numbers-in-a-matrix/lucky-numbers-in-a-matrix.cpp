class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        vector<int> ans;

        for(int i = 0; i < matrix.size(); i++) {

            // Find minimum element in the row
            int mini = matrix[i][0];
            int col = 0;

            for(int j = 1; j < matrix[i].size(); j++) {
                if(matrix[i][j] < mini) {
                    mini = matrix[i][j];
                    col = j;
                }
            }

            // Check if it is maximum in its column
            bool lucky = true;

            for(int k = 0; k < matrix.size(); k++) {
                if(matrix[k][col] > mini) {
                    lucky = false;
                    break;
                }
            }

            if(lucky) {
                ans.push_back(mini);
            }
        }

        return ans;
    }
};