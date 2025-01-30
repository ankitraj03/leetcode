class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int lsum=0;
        int rsum=0;
        int totals=0;
        for(auto & i: nums)
        totals+=i;

        for(int i=0;i<nums.size();i++){
            totals-=nums[i];
            rsum=totals;
            if(lsum==rsum)
            return i;
            lsum+=nums[i];
        }
        return -1;
    }
};