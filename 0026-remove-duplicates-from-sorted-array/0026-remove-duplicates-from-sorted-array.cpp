class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> sol;
        int i=0;
        for (int i = 0; i < nums.size() - 1; i++) {
            if (nums[i] != nums[i + 1]) {
                sol.push_back(nums[i]);
            }
        }
        sol.push_back(nums[nums.size()-1]);

        for (int i = 0; i < sol.size(); i++) {
            nums[i] = sol[i];
        }
        return sol.size();
    }
};