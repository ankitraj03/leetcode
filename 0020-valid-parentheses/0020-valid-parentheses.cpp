class Solution {
public:
    bool isValid(string s) {
        stack<char> ch;
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ch.push(s[i]);
            } else {
                if (!ch.empty()) {

                    if (s[i] == ')' && ch.top() == '(' ||
                        s[i] == '}' && ch.top() == '{' ||
                        s[i] == ']' && ch.top() == '[') {
                        ch.pop();
                    }
                    else{
                        return false;
                    }
                }
                else{
                return false;
                }
            }
        }
        if(ch.empty()){
            return true;
        }
        else
        return false;
    }
};