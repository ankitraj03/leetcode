class Solution {
public:
    int binarysearch(vector<int>& nums, int low, int high, int target) {
           if (low <= high) {
            int mid = (low+high)/2;

            if (nums[mid] == target)
                return mid;
            else if (nums[mid] < target)
                return binarysearch(nums, mid + 1, high, target);
            else
                return binarysearch(nums, low, mid - 1, target);
        }
        return low;
    }
    int searchInsert(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size()-1;
        return binarysearch(nums, low, high, target);
        
    }
};