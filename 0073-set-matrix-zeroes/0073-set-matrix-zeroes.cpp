class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        unordered_map<int, bool> rows, cols;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                if(matrix[i][j]==0){
                    rows[i]=true;
                    cols[j]=true;                }
            }
        }
        for(auto & pair:rows){
            int row=pair.first;
            for(int i=0;i<matrix[row].size();i++){
                matrix[row][i]=0;
            }
        }
        for(auto & pair:cols){
            int col=pair.first;
            for(int i=0;i<matrix.size();i++){
                matrix[i][col]=0;
            }
        }
    }
};