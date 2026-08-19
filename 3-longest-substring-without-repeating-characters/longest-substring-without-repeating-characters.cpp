class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            vector<bool> visited(256, false);

            for (int j = i; j < s.size(); j++) {
                if (visited[s[j]]) {
                    break;
                }

                visited[s[j]] = true;

                ans = max(ans, j - i + 1);
            }
        }

        return ans;
    }
};