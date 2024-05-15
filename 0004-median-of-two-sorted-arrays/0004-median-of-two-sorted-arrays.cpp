class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n=nums2.size();
        int i=0;
        while(i<n){
            nums1.push_back(nums2[i]);
            i++;
        }
        sort(nums1.begin(),nums1.end());
        int arrsize=nums1.size();
        float ans=0.00;
        int low=0, high=arrsize-1;
        if(arrsize%2==0){
            ans= (nums1[arrsize/2]+nums1[(arrsize/2)-1])/2.0;
        }
        else{
            ans=nums1[arrsize/2];
        }
        return ans;
    }
};