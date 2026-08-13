class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int l=nums.size();
        for(int i=0;i<nums.size();i++){
            int freq=1;
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){

            
            freq++;
                }}
                if(freq>(l/2)){
                    return nums[i];
                    
                }
        }
    
    return 0;
    }
};