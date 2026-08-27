class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        for(int i = 0; i < words.size() - 1; i++) {
            
            string a = words[i];
            string b = words[i + 1];

            int j = 0;

            while(j < a.size() && j < b.size() && a[j] == b[j]) {
                j++;
            }

            if(j == b.size() && j < a.size()) {
                return false;
            }

            if(j < a.size() && j < b.size()) {
                if(order.find(a[j]) > order.find(b[j])) {
                    return false;
                }
            }
        }

        return true;
    }
};