class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> pos;
        vector<int> ans;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1')
            pos.push_back(i);
        }
        for(int i=0;i<boxes.size();i++){
            int tans=0;
            for(int j=0;j<pos.size();j++){
                tans+=abs(i-pos[j]);
            }
            ans.push_back(tans);
        }
        return ans;
    }
};