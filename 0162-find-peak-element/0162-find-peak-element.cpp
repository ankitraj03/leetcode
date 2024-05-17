class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        return recurse(nums,0, nums.size()-1);
    }
    int recurse(vector<int> &nums, int low, int high){
        if(low==high){
            return low;
        }
        int mid=(low+high)/2;
        if(nums[mid]>nums[mid+1]){
            return recurse(nums, low, mid);
        }
        else{
            return recurse(nums, mid+1, high);
        }
    }
};