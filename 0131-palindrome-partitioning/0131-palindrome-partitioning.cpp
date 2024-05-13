class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        check(s, ans, temp, 0);
        return ans;
    }
    bool isPalindrome(string str) {
        int low = 0;
        int high = str.size() - 1;

        while (low < high) {
            if (str[low] != str[high]) {
                return false;
            }
            low++;
            high--;
        }
        return true; // is a palindrome
    }
    void check(string& s, vector<vector<string>>& ans, vector<string>& temp,
               int n) {
        if (n >= s.length()) {
            ans.push_back(temp);
            return;
        }
        for (int i = n; i < s.length(); i++) {
            string temp2 = s.substr(n, i - n + 1);
            if (isPalindrome(temp2)) {
                temp.push_back(temp2);
                check(s, ans, temp, i + 1);
                temp.pop_back();
            }
        }
    }
};