class Solution {
public:
    bool isvowel(char c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O' || c=='U')
        return 1;
        return 0;
    }
    string reverseVowels(string s) {
        int i=0, j=s.size();
        while(i<j){
            if(isvowel(s[i]) && isvowel(s[j])){
                swap(s[i], s[j]);
                i++;
                j--;
            }
            else if(isvowel(s[i])==1 && isvowel(s[j])==0)
            j--;
            else if(isvowel(s[i])==0 && isvowel(s[j])==1)
            i++;

            else{

            i++;
            j--;
            }
        }
        return s;
    }
};