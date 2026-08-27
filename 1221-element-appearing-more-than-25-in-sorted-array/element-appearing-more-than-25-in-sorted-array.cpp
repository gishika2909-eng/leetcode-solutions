class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size();

        for(int i = 0; i < n; i++) {
            int count = 1;

            while(i + count < n && arr[i] == arr[i + count])
                count++;

            if(count * 4 > n)
                return arr[i];
        }

        return -1;
    }
};