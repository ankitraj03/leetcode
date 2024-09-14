class Solution {
public:
    bool closeStrings(string word1, string word2) {
        map<char, int> mp1;
        map<char, int> mp2;

        for (auto& i : word1)
            mp1[i]++;

        for (auto& i : word2)
            mp2[i]++;

        auto it1 = mp1.begin();
        auto it2 = mp2.begin();

        while (it1 != mp1.end() && it2 != mp2.end()) {
            if (it1->first != it2->first)
                return false;

            it1++;
            it2++;
        }

        vector<int> freq1, freq2;
        for (auto& i : mp1)
            freq1.push_back(i.second);
        for (auto& i : mp2)
            freq2.push_back(i.second);

        sort(freq1.begin(), freq1.end());
        sort(freq2.begin(), freq2.end());

        return freq1 == freq2;
    }
};