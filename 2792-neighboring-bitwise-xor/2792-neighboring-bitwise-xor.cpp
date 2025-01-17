class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int n = derived.size();
        vector<int> temp(n, -1);

        for (int i = 0; i < n - 1; i++) {
            if (temp[i] == -1) {
                
                if (derived[i] == 0) {
                    temp[i] = 0;
                    temp[i + 1] = 0;
                } else {
                    temp[i] = 0;
                    temp[i + 1] = 1;
                }
            } else {
        
                if (derived[i] == 0) {
                    temp[i + 1] = temp[i]; 
                } else {
                    temp[i + 1] = 1 - temp[i]; 
                }
            }
        }


        for (int i = 0; i < n - 1; i++) {
            int tempo = temp[i] ^ temp[i + 1];
            if (tempo != derived[i])
                return false;
        }

        int lastCheck = temp[0] ^ temp[n - 1];
        if (lastCheck != derived[n - 1])
            return false;

        return true;
    }
};
