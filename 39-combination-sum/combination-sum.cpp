class Solution {
public:
    vector<vector<int>> ans;
    
    void backtrack(vector<int>& candidates, int target, int start, vector<int>& current) {
        // Target achieved
        if (target == 0) {
            ans.push_back(current);
            return;
        }

        // Try all candidates from start
        for (int i = start; i < candidates.size(); i++) {
            
            // If candidate is greater than target, skip it
            if (candidates[i] > target)
                continue;

            // Choose
            current.push_back(candidates[i]);

            // Same index because we can reuse the element
            backtrack(candidates, target - candidates[i], i, current);

            // Undo choice
            current.pop_back();
        }
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> current;

        sort(candidates.begin(), candidates.end());

        backtrack(candidates, target, 0, current);

        return ans;
    }
};