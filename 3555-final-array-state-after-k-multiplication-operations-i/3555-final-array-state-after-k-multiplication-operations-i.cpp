class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for (int i = 0; i < k; i++) {
            int curr = nums[0];
            int min_index = 0;
            for (int j = 0; j < nums.size(); j++) {
                if (curr > nums[j]) {
                    curr = nums[j];
                    min_index = j;
                }
            }
            nums[min_index] *= multiplier;
        }
        return nums;
    }
};