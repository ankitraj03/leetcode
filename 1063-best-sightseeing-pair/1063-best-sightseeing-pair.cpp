class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& nums) {
        int maxScore = 0;
        int currMax = nums[0]; 
        
        for (int j = 1; j < nums.size(); j++) {
            
            maxScore = max(maxScore, currMax + nums[j] - j);
            
            
            currMax = max(currMax, nums[j] + j);
        }
        
        return maxScore;
    }
};