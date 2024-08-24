class Solution {
public:
    bool isSubsequence(string s, string t) {
        int n=t.length();
        int m=s.length();
        int ind=0;
        for(int i=0;i<n;i++)
        {
            if(t[i]==s[ind])
            {
                ind++;
            }
        }
        if(ind==m)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};