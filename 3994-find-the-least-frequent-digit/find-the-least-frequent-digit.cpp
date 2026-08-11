class Solution {
public:
    int getLeastFrequentDigit(int n) {
        int freq[10] = {0};

        // Count frequency of each digit
        while (n > 0) {
            int digit = n % 10;
            freq[digit]++;
            n /= 10;
        }

        // Find least frequent digit
        int ans = 0;
        int minFreq = INT_MAX;

        for (int digit = 0; digit <= 9; digit++) {
            if (freq[digit] > 0 && freq[digit] < minFreq) {
                minFreq = freq[digit];
                ans = digit;
            }
        }

        return ans;
    }
};