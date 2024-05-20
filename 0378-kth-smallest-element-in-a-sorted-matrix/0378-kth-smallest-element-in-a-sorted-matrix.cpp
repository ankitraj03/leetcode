class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        priority_queue<int> pq;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                pq.push(matrix[i][j]);
            }
        }
        int temp=0;
        for(int i = 0; i < matrix.size() * matrix[0].size() - k; i++) {
        pq.pop();
    }

    return pq.top();
    }
};