class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size());

        int even = 0;
        int odd = 1;

        for (int x : nums) {
            if (x % 2 == 0) {
                ans[even] = x;
                even += 2;
            } else {
                ans[odd] = x;
                odd += 2;
            }
        }

        return ans;
    }
};