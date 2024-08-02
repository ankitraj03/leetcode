class Solution {
public:
    int uniquePaths(int m, int n) {

        // through recursion.... got TLE
    //     int ans=0;
    //     find(m, n, ans, 0,0);
    //     return ans;
    // }
    // void find(int m, int n, int & ans, int i, int j){
    //     if(i>=m || j>=n)
    //     return;

    //     if(i==m-1 && j==n-1){
    //         ans++;
    //         return;
    //     }

    //     find(m ,n, ans, i+1, j);
    //     find(m ,n, ans, i, j+1);

     std::vector<std::vector<int>> dp(m, std::vector<int>(n, 1));

        for (int i = 1; i < m; ++i) {
            for (int j = 1; j < n; ++j) {
                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
            }
        }

        return dp[m - 1][n - 1];

    }
};