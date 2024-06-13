class MinStack {
    vector<int> s;
public:
    MinStack() {
    }
    
    void push(int val) {
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        int n=s.size();
        return s[n-1];
    }
    
    int getMin() {
        int mini=INT_MAX;
        for(int i=0;i<s.size();i++){
            mini=min(mini,s[i]);
        }
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */