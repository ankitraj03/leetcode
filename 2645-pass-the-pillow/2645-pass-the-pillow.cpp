class Solution {
public:
    int passThePillow(int n, int time) {
        int flag = 1;
        if (time < n - 1)
            return time+1;
        while (time > 0) {

            time = time - (n - 1);
            if (flag == 0)
                flag = 1;
            else
                flag = 0;

            if (time < n - 1) {
                if (flag == 0) {
                    return (n - time);
                } else
                    return time+1;
            }
        }
        return -1;
    }
};