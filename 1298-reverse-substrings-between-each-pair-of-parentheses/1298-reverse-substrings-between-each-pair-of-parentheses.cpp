class Solution {
public:
    string reverseParentheses(string s) {
        string ans="";
        stack<char> st;
        int i=0;
        while(i<s.size()){
        vector<char> temp;
            
            if(s[i]==')'){
                while(st.top()!='('){
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                for(int j=0;j<temp.size();j++){
                st.push(temp[j]);
                
                }
            }
            else{
            st.push(s[i]);
            }
            i++;
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};