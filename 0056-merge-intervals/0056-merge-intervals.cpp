class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        vector<int> temp;
        if (intervals.empty()) return ans;
        sort(intervals.begin(), intervals.end());
        int i=1;
        int temp1=0;
        temp.push_back(intervals[0][0]);
        temp.push_back(intervals[0][1]);
        while(i<intervals.size()){
            if(temp[1]>=intervals[i][0]){
                temp1=temp[1];
                temp.pop_back();
                temp.push_back(max(intervals[i][1],temp1));
            }
            else if(temp[1]<intervals[i][0]){
                ans.push_back(temp);
                temp.clear();
                temp.push_back(intervals[i][0]);
                temp.push_back(intervals[i][1]);
            }
            i++;
        }
        ans.push_back(temp);
        return ans;
    }

};