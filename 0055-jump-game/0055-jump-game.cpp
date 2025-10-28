class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector<int> dp(nums.size(), -1);
        return solve(nums, 0, dp);
    }
    bool solve(vector<int> & nums, int i, vector<int> &dp){
        if(i>=nums.size()-1)
        return 1;
        if(dp[i]!=-1)
        return dp[i];
        for(int j=1;j<=nums[i];j++){
            dp[i+j]=solve(nums,i+j,dp);
            if(dp[i+j]==1)
            return 1;
            
        }
        return 0;
    }

};