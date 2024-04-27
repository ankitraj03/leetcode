class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        int count=1;
        int maxcount=1;
        int curr=nums[0];
        for(int i=1;i<nums.size();i++){
                if(nums[i]==curr) continue;
                if(nums[i]!=curr+1){
                    curr=nums[i];
                    count=1;
                }
                else{
                    curr++;
                    count++;
                }
                
                maxcount=max(maxcount,count);
        }
        return maxcount;
    }
};