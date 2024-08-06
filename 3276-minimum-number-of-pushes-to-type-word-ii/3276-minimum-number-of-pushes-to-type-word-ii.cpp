class Solution {
public:
    int minimumPushes(string word) {

        unordered_map<char, int> mp;
        for (int i = 0; i < word.size(); i++)
            mp[word[i]]++;
        vector<int> freq;
        for(auto & i: mp)
        freq.push_back(i.second);
        sort(freq.begin(), freq.end());
        reverse(freq.begin(), freq.end());
        int count=0;
        int ans = 0;
        if(freq.size()<8)
        return word.size();
        for(auto & i: freq){
          count++;
          if(count<=8)
          ans+=i;
          else if(count>8 and count<=16)
          ans+=i*2;
          else if(count> 16 && count<=24)
          ans+=i*3;
          else if(count>24)
          ans+=i*4;
        }
        return ans;
    }
};