class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int temp=1;
        int n=nums.size()-1;
        for(int i=n; i>=0;i--){
            ans.push_back(temp);
            temp*=nums[i];
        }
        reverse(ans.begin(), ans.end());
        temp=1;
        for(int i=0;i<=n;i++){
            ans[i]*=temp;
            temp*=nums[i];
        }
        return ans;
    }
};