class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0],sell=0;

        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            if(prices[i]<buy){
                buy=prices[i];
            }
            sell=max(sell,prices[i]-buy);
        }
        return sell;
    }
};