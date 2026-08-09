class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int s = nums[0];
        int e = nums[nums.size() - 1];

        for (int i = s; i >= 1; i--) {
            if (s % i == 0 && e % i == 0) {
                return i;
            }
        }

        return 1;
    }
};