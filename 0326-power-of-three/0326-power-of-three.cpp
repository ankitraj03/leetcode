class Solution {
public:
int  ans=1;
    bool isPowerOfThree(int n) {
        return power(n);
    }
    bool power(int n){
        if (n == 1) {
            return true;
        } else if (n % 3 == 0 && n != 0) {
            n = n / 3;
            return power(n);
        }
        return false;
    }
};