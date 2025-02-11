class Solution {
public:
    string removeOccurrences(string s, string part) {
        stack<char> st;
        int n = part.size();

        for (char c : s) {
            st.push(c);
            if (st.size() >= n) {
                string temp;
                for (int i = 0; i < n; i++) {
                    temp = st.top() + temp;
                    st.pop();
                }
                if (temp != part) {
                    for (char ch : temp) {
                        st.push(ch);
                    }
                }
            }
        }

        string ans;
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
