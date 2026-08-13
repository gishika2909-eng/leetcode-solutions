class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=0;
        for(int i =0;i<nums.size();i++){
            if(nums[i]!=0){
                nums[c]=nums[i];
                c++;
            }
            
        }
        while(c<nums.size()){
            nums[c]=0;
            c++;
        }
        
        
    }
};