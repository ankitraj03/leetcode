class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int> mp;
        for(auto & i: nums)
        mp[i]++;
        int count=0;

        for(auto & i: mp){
            if(i.second>=2){
                nums[count]=i.first;
                count++;
                nums[count]=i.first;
                count++;
            }
            else{
                nums[count]=i.first;
                count++;
            }
        }
        return count;
    }
};