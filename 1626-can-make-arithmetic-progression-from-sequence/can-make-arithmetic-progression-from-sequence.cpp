class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
        sort(arr.begin(),arr.end());
         int p =arr[1]-arr[0];
         int v=0;
        for(int i =0;i<arr.size()-1;i++){
            int c = arr[i+1]-arr[i];
            if(c==p){
                v++;

            }

          
        }
        if(v==arr.size()-1){
            return true;
        }
        return false;
    }
};