class Solution {
public:
    int compareVersion(string version1, string version2) {
        int i = 0, j = 0;
        while (i < version1.size() || j < version2.size()) {
            int num1 = 0;
            int num2 = 0;

            int a = i;
            while(a<version1.size() && version1[a]!='.'){
                num1 = num1 * 10 + (version1[a] - '0');
                    a++;
            }
            i = a + 1;
            a = j;

            while(a<version2.size() && version2[a]!='.'){
                num2 = num2 * 10 + (version2[a] - '0');
                    a++;
            }
            j=a+1;
            if(num1<num2)
            return -1;
            else if(num1>num2)
            return 1;
        }
        return 0;
    }
};