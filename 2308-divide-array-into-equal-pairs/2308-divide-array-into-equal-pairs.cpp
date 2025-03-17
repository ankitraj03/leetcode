class Solution {
public:
    bool divideArray(vector<int>& nums) {
        if(nums.size()%2!=0)
        return 0;
        unordered_map<int, int> mp;
        for(auto & i:nums)
        mp[i]++;

        for(auto & i: mp){
            if(i.second%2!=0)
            return 0;
        }
        return 1;
    }
};