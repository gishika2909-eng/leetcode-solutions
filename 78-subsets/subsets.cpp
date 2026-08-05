class Solution {
public:
    vector<vector<int>> ans;

    void solve(int index, vector<int>& nums, vector<int>& temp) {
        if (index == nums.size()) {
            ans.push_back(temp);
            return;
        }

        // Include nums[index]
        temp.push_back(nums[index]);
        solve(index + 1, nums, temp);

        // Backtrack
        temp.pop_back();

        // Exclude nums[index]
        solve(index + 1, nums, temp);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> temp;
        solve(0, nums, temp);
        return ans;
    }
};