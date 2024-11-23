class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {
        int m = box.size();
    int n = box[0].size();
    
    // Move stones ('#') to the rightmost available position within each row
    for (int i = 0; i < m; i++) {
        for (int j = n - 1; j >= 0; j--) {
            if (box[i][j] == '#') {
                int empty = j;
                while (empty + 1 < n && box[i][empty + 1] == '.') {
                    empty++;
                }
                if (empty != j) {
                    box[i][empty] = '#';
                    box[i][j] = '.';
                }
            }
        }
    }

    vector<vector<char>> ans(n, vector<char>(m));  

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            ans[j][m - 1 - i] = box[i][j];
        }
    }
    
        return ans;
    }
};