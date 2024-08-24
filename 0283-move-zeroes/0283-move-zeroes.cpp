class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int i=0, j=1;
        int s=nums.size();
        if(s==1)
        return;
        // if(s<=2){
        //     if(nums[0]==0)
        //     swap(nums[0], nums[1]);
        //     return;
        // }
        while(i<s && j<s){
            if(nums[i]!=0){
                i++;
                j++;
            }
            else if(nums[j]!=0){
                swap(nums[i], nums[j]);
                i++;
                j++;
            }
            else{
                j++;
            }
        }
    }
};