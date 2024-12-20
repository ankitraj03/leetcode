class Solution {
public:
    int largestValsFromLabels(vector<int>& values, vector<int>& labels,
                              int numWanted, int useLimit) {
        unordered_map<int, int> mp;
        for (int i = 0; i < labels.size(); i++) {
            if (mp.find(labels[i]) == mp.end()) {
                mp[labels[i]] = useLimit;
            }
        }

        vector<pair<int, int>> valueLabelPairs;
        for (int i = 0; i < values.size(); i++) {
            valueLabelPairs.push_back({values[i], labels[i]});
        }

        sort(valueLabelPairs.rbegin(), valueLabelPairs.rend());

        int ans = 0, count = 0;
        for (int i = 0; i < valueLabelPairs.size(); i++) {
            if (count >= numWanted) {
                break;
            }
            int value = valueLabelPairs[i].first;
            int label = valueLabelPairs[i].second;

            
            
            if (mp[label] > 0) {
                ans += value;
                mp[label]--;
                count++;
            }
        }

        return ans;
    }
};