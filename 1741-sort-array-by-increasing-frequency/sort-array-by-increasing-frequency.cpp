class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> freq;

        // Count frequency
        for (int x : nums) {
            freq[x]++;
        }

        // Sort using frequency, then value descending
        sort(nums.begin(), nums.end(), [&](int a, int b) {
            if (freq[a] != freq[b])
                return freq[a] < freq[b];

            return a > b;
        });

        return nums;
    }
};