class Solution {
public:
    string countAndSay(int n) {
        string temp = "1";
        string ans;
        int i = 0, j = 1, k = 2;
        while (k <= n) {
            int count = 1;
            ans = "";
            i = 0;
            j = 1;
            while (i < temp.size()) {
                int count = 1;
                while (j < temp.size() && temp[j] == temp[i]) {
                    count++;
                    j++;
                }
                ans += to_string(count) + temp[i];
                i = j;
                j++;
            }

            temp = ans;
            k++;
        }
        return temp;
    }
};