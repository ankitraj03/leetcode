class Solution {
public:
    char kthCharacter(int k) {
        string word="a";
        return check(k, word);
    }
    char check(int k, string word){
        
        if(word.size()>k)
        return word[k-1];

        string temp;
        for(int i=0;i<word.size();i++){
            temp+=word[i]+1;
        }
        return check(k, word+temp);
         
    }
};