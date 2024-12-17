// class Solution {
// public:
//     string repeatLimitedString(string s, int repeatLimit) {
//         unordered_map<char, int> mp;
//         set < char,greater<char>> st;

//         for (auto& i : s) {
//             mp[i]++;
//             st.insert(i);
//         }
//         string ans;
//         int j = 1;
//         int i = 0;
//         int count = 0;
//         while (i<st.size()) {
//             char curr = st[i];
//             for (int i = 0; i < mp.find(curr).second; i++) {
//                 if (count == repeatLimit) {
//                     if (mp[st[j]] > 0) {
//                         ans += st[j];
//                         mp[st[j]]--;
//                         count = 0;
//                     } else {
//                         j++;
//                     }
//                 }
//                 ans += curr;
//                 count++;
//             }
//             i++;
//         }
//         return ans;
//     }
// };

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string repeatLimitedString(string s, int repeatLimit) {
        unordered_map<char, int> mp; 
        set<char, greater<char>> st; 

    
        for (auto& i : s) {
            mp[i]++;
            st.insert(i);
        }

        string ans;
        int count = 0; 
        while (!st.empty()) {
            
            auto it = st.begin();
            char curr = *it;
            
           
            int repetitions = min(mp[curr], repeatLimit);
            for (int i = 0; i < repetitions; i++) {
                ans += curr;
                mp[curr]--;
            }
            
            
            if (mp[curr] == 0) 
                st.erase(curr);
            if (!st.empty() && mp[curr] > 0) {
                auto nextIt = next(st.begin());
                if (nextIt == st.end()) 
                    break; 
                char nextChar = *nextIt;
                ans += nextChar;
                mp[nextChar]--;
                if (mp[nextChar] == 0) 
                    st.erase(nextChar);
            }
        }

        return ans;
    }
};
