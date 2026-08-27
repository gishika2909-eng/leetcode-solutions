class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        int mn = INT_MAX;
        vector<vector<int>> ans;

        for(int i = 1; i < arr.size(); i++) {
            int diff = arr[i] - arr[i-1];

            if(diff < mn) {
                mn = diff;
                ans.clear();
                ans.push_back({arr[i-1], arr[i]});
            }
            else if(diff == mn) {
                ans.push_back({arr[i-1], arr[i]});
            }
        }

        return ans;
    }
};