class Solution {
public:
    int calPoints(vector<string>& operations) {
        vector<int> st;

        for (string op : operations) {
            if (op == "+") {
                st.push_back(st[st.size() - 1] + st[st.size() - 2]);
            }
            else if (op == "D") {
                st.push_back(2 * st.back());
            }
            else if (op == "C") {
                st.pop_back();
            }
            else {
                st.push_back(stoi(op));
            }
        }

        int sum = 0;
        for (int x : st) sum += x;

        return sum;
    }
};