class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        for(auto & i:nums)
        mp[i]++;

        int n=mp.size();
        int i=0;
        vector<pair<int,int>> pr;
        for(const auto& [num,freq]:mp){
            pr.push_back({num,freq});
        }
        
        //using lambda function
        sort(pr.begin(), pr.end(), [](const pair<int, int>& p1, const pair<int, int>& p2) {
            return p1.second > p2.second; 
        });

        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(pr[i].first);
        }
        return ans;
    }
};