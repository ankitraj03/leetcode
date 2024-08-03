class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        if(target.size()!= arr.size())
        return 0;

        unordered_map<int, int> mp;
        unordered_map<int,int> mp2;
        for(auto & i : arr)
        mp[i]++;
        for(auto & i : target)
        mp2[i]++;


        if(mp!=mp2)
        return 0;
        return 1;
    }
};