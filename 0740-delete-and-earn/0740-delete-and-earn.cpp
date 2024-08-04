class Solution {
public:
    int deleteAndEarn(vector<int>& nums) {

        //greedy approach-----wrong logic
        // unordered_map<int, int> mp;
        // int maxvalue=0;
        // int key=0;
        // int points=0;
        // for(auto & i: nums)
        // mp[i]++;
        // while(!mp.empty()){
        //     for(auto & i: mp){
        //         if(maxvalue<(i.first*i.second)){
        //             maxvalue=i.first*i.second;
        //             key=i.first;
        //         }
        //     }
        //     points+=maxvalue;
        //     maxvalue=0;
        //     mp.erase(key);
        //     if(mp.find(key+1)!=mp.end())
        //     mp.erase(key+1);
        //     if(mp.find(key-1)!=mp.end())
        //     mp.erase(key-1);
        // }
        // return points;

        int n=10001;
        vector<int> temp(n);
        vector<int> dp(n);
        for(int num: nums){
            temp[num]++;
        }
        dp[1]= temp[1];
        for(int i=2;i<n;i++){
            dp[i]=max(dp[i-1], dp[i-2]+i*temp[i]);
        }

        return dp[n-1];
    }
};