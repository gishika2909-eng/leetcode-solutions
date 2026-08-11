class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int> ans;
        unordered_map<int, int> freq;

        for (int x : nums) {
            freq[x]++;

            if (freq[x] == 2) {
                ans.push_back(x);
            }
        }

        return ans;
    }
};