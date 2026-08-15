class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0;

        // First k elements
        for (int i = 0; i < k; i++) {
            sum += nums[i];
        }

        double maxSum = sum;

        // Sliding window
        for (int i = k; i < nums.size(); i++) {
            sum += nums[i];
            sum -= nums[i - k];

            maxSum = max(maxSum, sum);
        }

        return maxSum / k;
    }
};