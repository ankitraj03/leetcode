class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1;
        unordered_map<int, int> mp2;

        for(auto & i: nums1)
        mp1[i]++;
        for(auto & i: nums2)
        mp2[i]++;

        vector<vector<int>> ans;
        vector<int> temp;
        for(auto & it: mp1){
            if(mp2.find(it.first)==0)
            temp.push_back(it.first);
        }
        ans.push_back(temp);
        temp.clear();
        for(auto & it: mp2){
            if(mp1.find(it.first)==0)
            temp.push_back(it.first);
        }
        ans.push_back(temp);
        return ans;
    }
};