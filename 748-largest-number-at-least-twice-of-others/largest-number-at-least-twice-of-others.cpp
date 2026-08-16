class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int>m =nums;
      int  l=nums.size()-1;
        sort(nums.begin(),nums.end());
        int p=nums[l];
        for(int i=0;i<nums.size()-1;i++){
            if(2*nums[i]>nums[l]){
                return -1;
            }
        }
        for(int i=0;i<m.size();i++){
            if(m[i]==p){
                return i;
            }
        }
        return -1;
    }
};