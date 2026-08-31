class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int st=0;
        int end = n;
        while(st<n){
            ans.push_back(nums[st]);
            st++;
            ans.push_back(nums[end]);
            end++;
        }
        return ans;
    }
};
