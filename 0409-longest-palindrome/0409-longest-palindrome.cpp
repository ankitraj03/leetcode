class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int sum=0;
        int odd=0;
        for(auto & i: mp){
            if(i.second%2==0)
            sum+=i.second;
            else{
            sum+=i.second-1;
            odd=1;
            }
        }
        
        return sum+odd;
    }
};