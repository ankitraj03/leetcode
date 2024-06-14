class Solution {
public:
    string reverseWords(string s) {
        vector<string> st;
        string temp;
        int i = 0;

        while (i < s.size()) {
            if (s[i] == ' ') {
                if (!temp.empty()) {
                    st.push_back(temp);
                    temp.clear();
                }
            } else {
                temp += s[i];
            }
            i++;
        }

        if (!temp.empty()) {
            st.push_back(temp);
        }

        reverse(st.begin(), st.end());
        string ans;
        for(auto & i: st){
            ans+=i;
            ans+=' ';
        }
        ans.pop_back();
        return ans;
    }
};