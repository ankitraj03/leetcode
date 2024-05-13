class Solution {
public:
int  ans=1;
    bool isPowerOfThree(int n) {
        if(n==0)
        return 0;
        power(n);
        return ans;
    }
    void power(int n){
        if(n==0 || n==1)
        return;

        power(n/3);
        if(n%3!=0)
        ans=0;
    }
};