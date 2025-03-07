class Solution {
public:
    vector<int> closestPrimes(int left, int right) {
        vector<int> ans(2, -1);
        vector<int> prime;

        for (int i = left; i <= right; i++) {
            if (i < 2) continue;

            bool isPrime = true;
            for (int j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = false;
                    break; 
                }
            }

            if (isPrime) {
                prime.push_back(i);
            }
        }

    
        if (prime.size() < 2) return ans;

        int minDiff = INT_MAX;
        for (int i = 0; i < prime.size() - 1; i++) {
            int diff = prime[i + 1] - prime[i];
            if (diff < minDiff) {
                minDiff = diff;
                ans[0] = prime[i];
                ans[1] = prime[i + 1];
            }
        }

        return ans;
    }
};
