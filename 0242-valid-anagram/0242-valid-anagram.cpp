class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mp1;
        unordered_map<char,int> mp2;
         for(auto & i:s){
            mp1[i]++;
         }
         for(auto & j:t){
            mp2[j]++;
         }

         if(mp1!=mp2)
         return false;

         return true;
    }
};