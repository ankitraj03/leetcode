class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> temp;
        Backtrack(candidates, ans, temp, target, 0, 0);
        return ans;
    }
    void Backtrack(vector<int>& candidates, vector<vector<int>>& ans,
                   vector<int>& temp, int target, int sum, int idx) {
        for (int i = idx; i < candidates.size(); i++) {
            if (i > idx && candidates[i] == candidates[i - 1])
                continue;
            int x = candidates[i];
            sum += x;
            temp.push_back(x);
            if (sum == target) {
                ans.push_back(temp);
            } else if (sum < target) {
                Backtrack(candidates, ans, temp, target, sum, i + 1);
            }
            sum -= x;
            temp.pop_back();
        }
    }
};