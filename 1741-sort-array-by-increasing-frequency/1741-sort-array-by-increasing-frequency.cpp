class Solution {
public:

    vector<int> frequencySort(vector<int>& nums) {
   
        vector<int> ans;
        unordered_map<int, int> mp;
        for(auto & i: nums){
            mp[i]++;
        }
        vector<pair<int,int> >pair;
        for(auto & i: mp){
            pair.push_back(i);
        }

        sort(pair.begin(), pair.end(), cmp);

        for(auto & i: pair){
            for(int j=0;j<i.second;j++){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
            static bool cmp(pair<int,int> a, pair<int,int> b){
                if (a.second == b.second) {
            return a.first > b.first;
        }
    return a.second< b.second;
}
};