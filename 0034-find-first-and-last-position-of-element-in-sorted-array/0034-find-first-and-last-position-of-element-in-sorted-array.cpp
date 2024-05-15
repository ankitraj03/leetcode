class Solution {
public:
    vector<int> searchRange(vector<int>& arr, int x) {
        // First binary search for the first occurrence
        int n=arr.size();
        int low=0;
        int high=n-1;
        vector<int> ans;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == x) {
                if (mid == 0 || arr[mid - 1] != x) {
                    ans.push_back(mid);
                    break;
                } else {
                    high = mid - 1;
                }
            } else if (arr[mid] > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        low = 0;
        high = n - 1;

        // Second binary search for the last occurrence
        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] == x) {
                if (mid == n - 1 || arr[mid + 1] != x) {
                    ans.push_back(mid);
                    break;
                } else {
                    low = mid + 1;
                }
            } else if (arr[mid] > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if(ans.size()==0){
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};