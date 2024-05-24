class StockSpanner {
public:
    vector<int> temp;
    StockSpanner() {

    }
    int check(vector<int>& temp, int price) {
        int count = 0; 
        for(int i = temp.size() - 1; i >= 0; i--) {
            if(temp[i] <= price) {
                count++;
            } else {
                break; 
            }
        }
        return count;
    }

    int next(int price) {
        temp.push_back(price);
        int ans = check(temp, price);
        return ans;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */