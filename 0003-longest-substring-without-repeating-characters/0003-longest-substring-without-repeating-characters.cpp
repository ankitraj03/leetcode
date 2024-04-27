class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> mp;
        int count = 0;
        int maxcount = 0;
        int start = 0;
        for (int i = 0; i < s.size(); i++) {
            if (mp.find(s[i]) != mp.end() && mp[s[i]] >= start) {
                start = mp[s[i]] + 1;
                count = i - start + 1;
            } else {
                count++;
            }
            mp[s[i]] = i;
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};