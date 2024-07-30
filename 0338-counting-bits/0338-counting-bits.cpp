class Solution {
public:
    vector<int> countBits(int n) {
        unordered_map<int, int> mp;
        vector<int> result;
        for (int i = 0; i <= n; ++i) {
            result.push_back(find(i, mp));
        }
        return result;
    }

    int find(int n, unordered_map<int, int>& mp) {
        if (n == 0) return 0;
        if (n == 1) return 1;
        if (mp.find(n) != mp.end()) return mp[n];

     
        mp[n] = find(n / 2, mp) + (n % 2);
        return mp[n];
    }
};