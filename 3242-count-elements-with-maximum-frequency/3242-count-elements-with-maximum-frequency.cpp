class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans=0;
        int count=1;
        for(auto & i:mp){
            if(i.second==ans)
            count++;
            else if(i.second>ans){
            ans=i.second;
            count=1;
            }

        }

        return ans*count;
    }
};