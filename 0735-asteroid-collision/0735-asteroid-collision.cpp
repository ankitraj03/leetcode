class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        
        for (int i = 0; i < asteroids.size(); i++) {
            int current = asteroids[i];
            
            // Process collisions if current is negative and there's a positive on top
            while (!st.empty() && current < 0 && st.top() > 0) {
                if (abs(current) > st.top()) {
                    st.pop();  // Top asteroid destroyed, continue checking
                } else if (abs(current) == st.top()) {
                    st.pop();  // Both asteroids destroyed
                    current = 0;  // Mark as destroyed, break to avoid re-pushing
                    break;
                } else {
                    current = 0;  // Current asteroid destroyed
                    break;
                }
            }
            
            if (current != 0) {  // If asteroid is still active
                st.push(current);
            }
        }

        // Collect the remaining asteroids from the stack
        vector<int> ans;
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());  // Reverse to restore original order
        return ans;
    }
};
