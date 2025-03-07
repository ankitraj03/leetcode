class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people, 0);
        int n = 0; 
        
        while (candies > 0) {
            for (int i = 0; i < num_people; i++) {
                if (candies >= n + 1) { 
                    ans[i] += (n + 1);
                    candies -= (n + 1);
                } else { 
                    ans[i] += candies;
                    return ans;
                }
                n++; 
            }
        }

        return ans;
    }
};
