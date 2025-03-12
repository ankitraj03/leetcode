class Solution {
public:
    int maximumCount(vector<int>& nums) {
        
        int l=0, r=nums.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[r]==0)
            r--;
            if(nums[mid]<0)
            l=mid+1;
            else
            r=mid-1;
        }
        int negative=l;
        r=nums.size()-1;
        while(l<=r){
            if(nums[l]==0)
            l++;
            int mid=(l+r)/2;
            if(nums[mid]==0)
            l=mid+1;
            else
            r=mid-1;
        }
        int positive=(nums.size()-l);
        return max(positive, negative);
    }
};