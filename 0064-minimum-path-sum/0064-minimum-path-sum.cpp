class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m=grid.size();
        int n=grid[0].size();
        vector<vector<int>> dp(m, vector<int>(n, -1));
        return find(grid, dp,m,n);
    }

    int find(vector<vector<int>>&grid, vector<vector<int>>&dp,int m,int n){
        if(m==1 && n==1)
        return grid[0][0];

        if(m==0 || n==0)
        return INT_MAX;
        
        if(dp[m-1][n-1]!=-1)
        return dp[m-1][n-1];

        dp[m-1][n-1]=grid[m-1][n-1]+min(find(grid, dp, m-1, n), find(grid, dp, m, n-1));
        return dp[m-1][n-1];
    }
};