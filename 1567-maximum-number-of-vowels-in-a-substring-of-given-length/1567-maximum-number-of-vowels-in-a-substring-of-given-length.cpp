class Solution {
public:
    bool isvowel(char c) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            return 1;
        return 0;
    }
    int maxVowels(string s, int k) {
        int ans = 0;
        int count = 0;

        for (int i = 0; i < k; i++) {
            if (isvowel(s[i]))
                ans++;
        }
        int i = 0, j = k;
        count = ans;
        while (j < s.size()) {
            if (isvowel(s[j])) {
                if (isvowel(s[i]) == 0)
                    count++;
            }
            else {
                if (isvowel(s[i]) == 1)
                    count--;
            }
            i++;
            j++;
        ans = max(ans, count);
        }
    return ans;
    }
};