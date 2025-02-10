class Solution {
public:
    string clearDigits(string s) {
        stack<char> st;
        for(auto & i:s){
            if(i>=48 && i<=57){
                if(st.top()>=97 && st.top()<=122)
                st.pop();
            }
            else
            st.push(i);
        }
        string ans;
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};