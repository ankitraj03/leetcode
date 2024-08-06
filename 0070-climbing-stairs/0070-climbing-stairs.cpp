class Solution {
public:
    int climbStairs(int n) {
        unordered_map<int, int> mp;
       return find(n, mp);
    }
    int find(int n, unordered_map<int,int> &mp){
       if(n==0 || n==1)
       return 1;

       if(mp.find(n)==mp.end()){
          mp[n]= find(n-1, mp) + find(n-2, mp);
       }
       return mp[n];
    }
};