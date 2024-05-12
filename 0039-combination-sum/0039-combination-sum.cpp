class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> ans;
        Backtrack(candidates, res, ans, target, 0, 0);
        return res;
    }
    void Backtrack(vector<int> &candidates, vector<vector<int>> &res, vector<int>ans,int target, int sum, int idx){
      for(int i=idx;i<candidates.size();i++){
        int x=candidates[i];
        sum+=x;
        ans.push_back(x);
        if(sum==target){
            res.push_back(ans);
        }
        else if(sum<target){
            Backtrack(candidates,res,ans,target,sum,i);
        }
        sum-=x;
        ans.pop_back();
      }
    }
    
};