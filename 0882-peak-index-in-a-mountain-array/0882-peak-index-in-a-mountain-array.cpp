class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int ans=INT_MIN;
        int i;int w;
        for(i=0;i<arr.size();i++)
        {
            if(arr[i]>ans){
            ans=arr[i];
             w=i;
            }
            
        }
        return w;
            }
};