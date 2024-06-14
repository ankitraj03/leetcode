class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        
        int sum = 0;
        int prev = 0;
        
        for (int i = 0; i < s.size(); ++i) {
            int curr = mp[s[i]];
            
            if (prev < curr) {
                sum -= prev;
            } else {
                sum += prev;
            }
            
            prev = curr;
        }
        sum += prev;
        
        return sum;
    }
};