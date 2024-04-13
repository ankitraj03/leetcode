class Solution {
public:
    void sortColors(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]+=1;
        }
        int count=0;
        for(auto &pair:mp){
            int n=pair.second;
            int m=pair.first;
            for(int i=count;i<count+n;i++){
                nums[i]=m;
            }
            count+=n;
        }
    }
};