class Solution {
public:
    int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1;
        int ans=INT_MIN;
        while(i!=j){
            int temp= (j-i)*(min(height[i], height[j]));
            ans=max(ans, temp);
            if(height[i]>height[j])
            j--;
            else
            i++;
        }
        return ans;
    }
};