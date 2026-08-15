class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        vector<string> ans;
        int max = INT_MAX;

        for (int i = 0; i < list1.size(); i++) {
            for (int j = 0; j < list2.size(); j++) {

                if (list1[i] == list2[j]) {
                    int sum = i + j;

                    if (sum < max) {
                        max = sum;
                        ans.clear();
                        ans.push_back(list1[i]);
                    }
                    else if (sum == max) {
                        ans.push_back(list1[i]);
                    }
                }
            }
        }

        return ans;
    }
};