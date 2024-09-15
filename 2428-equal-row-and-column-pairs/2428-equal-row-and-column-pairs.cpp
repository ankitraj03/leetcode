class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        int i=0, j=0;
        int flag=0;
        int count=0;
        int n=grid.size();
        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(grid[0][i]==grid[j][0]){
                    int k=0;
                    while(k<n){
                        if(grid[k][i]!=grid[j][k])
                        flag=1;
                        k++;
                    }
                    if(flag==0)
                    count++;
                    flag=0;
                }
            }
        }
        return count;
    }
};