class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {

        //my code-- dont know why it is not working-passed 98% testcases


        // unordered_map<char,int> mp;
        // for(int i=0;i<str1.size();i++){
        //    if(str1[i]!='z'){
        //         mp[str1[i]+1];
        //    }
        //    else if(str1[i]=='z'){
        //         mp['a']++;
        //    }
        //    mp[str1[i]]++;
        // }

        // for(int i=0;i<str2.size();i++){
        //     if(mp.find(str2[i])==mp.end())
        //     return 0;
        // }
        // return 1;

        int i = 0, j = 0;
        int n1 = str1.length(), n2 = str2.length();
        
        while (i < n1 && j < n2) {
            
            if ((str2[j] - str1[i] + 26) % 26 <= 1) {
                j++; 
            }
            i++; 
        }
        

        return j == n2;
    }
};