#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        sort(potions.begin(), potions.end());
        vector<int> ans;

        for (int i = 0; i < spells.size(); i++) {
            long long requiredPotion = (success + spells[i] - 1) / spells[i]; 
            int temp = 0;

            if (requiredPotion > potions.back()) {
                ans.push_back(0);  
            } else {
                
                int pos = lower_bound(potions.begin(), potions.end(), requiredPotion) - potions.begin();
                temp = potions.size() - pos;
                ans.push_back(temp);
            }
        }

        return ans;
    }
};
