class Solution {
public:
    // int jump(vector<int>& nums) {

        // my code- got TLE
    //     int count=0, ans=INT_MAX;
    //     find(nums,0, count, ans);
    //     return ans;
    // }
    // void find(vector<int> nums, int i, int count, int & ans){
    //     int n=nums.size();
    //     if(i>=n)
    //    return;

    //    if(i==n-1){
    //     ans=min(count, ans);
    //     return;
    //    }
    //    for(int j=1;j<=nums[i];j++){
    //     find(nums, j+i, count+1, ans);
    //    } 

    int jump(vector<int>& nums) {
        int jumps = 0, current_end = 0, farthest = 0;
        
        for (int i = 0; i < nums.size() - 1; ++i) {
            
            farthest = max(farthest, i + nums[i]);
            
        
            if (i == current_end) {
                jumps++;
                current_end = farthest; 
            }
        }
        
        return jumps;
    }
};