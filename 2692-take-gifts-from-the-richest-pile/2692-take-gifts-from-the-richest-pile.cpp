class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        // vector<int> temp;
        for(int i=0;i<k;i++){
            sort(gifts.begin(), gifts.end());
            int n=sqrt(gifts[gifts.size()-1]);
            // temp.push_back(n);
            gifts[gifts.size()-1]=n;
        }
        long long sum=0;
        for(auto & i: gifts)
        sum+=i;

        return sum;
    }
};