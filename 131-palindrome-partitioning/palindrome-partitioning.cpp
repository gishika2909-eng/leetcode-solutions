class Solution {
public:
    vector<vector<string>> ans;
    vector<string> curr;

    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s[l] != s[r])
                return false;
            l++;
            r--;
        }
        return true;
    }

    void backtrack(string &s, int start) {
        // Entire string is partitioned
        if (start == s.size()) {
            ans.push_back(curr);
            return;
        }

        // Try every possible substring
        for (int end = start; end < s.size(); end++) {

            if (isPalindrome(s, start, end)) {
                // Choose
                curr.push_back(s.substr(start, end - start + 1));

                // Explore
                backtrack(s, end + 1);

                // Undo choice
                curr.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {
        backtrack(s, 0);
        return ans;
    }
};