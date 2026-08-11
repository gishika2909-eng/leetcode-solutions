class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        for(int i = 0 ;i<nums.size();i++){
            int n = nums[i];
              int sum=0;
            while(n!=0){
              
                int s = n%10;
                sum = sum + s;
                n=n/10;

            }  
            if(sum==i){
                return i;
                break;
            }
                  }
                  return -1;
    }
};