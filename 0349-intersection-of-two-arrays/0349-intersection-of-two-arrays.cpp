class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        unordered_map<int,int> mp2;
        for(int num: nums1){
            mp[num]++;
        }
        for(int num: nums2){
            mp2[num]++;
        }
        vector<int> ans;
        for(auto & num: mp){
            if(mp2.find(num.first)!=mp2.end()){
                ans.push_back(num.first);
            }
        }
        return ans;
    }
};