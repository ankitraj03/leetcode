class Solution {
public:
     string maskPII(string s) {

        for (int i = 0; i < s.size(); i++) {
            s[i] = tolower(s[i]);
        }

        string maskedString = "";
        string lastDigits = "";
        int digitCount = 0;

        // Case: Masking Phone Numbers
        if (s.find("@") == string::npos) {

            for (int i = 0; i < s.size(); i++) {
                if (isdigit(s[i]))
                    digitCount++;
            }

            if (digitCount - 10 == 0) {
                maskedString += "***-***-";
            } else if (digitCount - 10 == 1) {
                maskedString += "+*-***-***-";
            } else if (digitCount - 10 == 2) {
                maskedString += "+**-***-***-";
            } else if (digitCount - 10 == 3) {
                maskedString += "+***-***-***-";
            }

            digitCount = 0;
            for (int i = s.size() - 1; i >= 0; i--) {
                if (isdigit(s[i])) {
                    lastDigits += s[i];
                    digitCount++;
                }
                if (digitCount == 4)
                    break;
            }

            reverse(lastDigits.begin(), lastDigits.end());
        }

        else {

            auto it = s.find("@");

            maskedString = maskedString + s[0] + "*****" + s.substr(it - 1);
        }

        return maskedString + lastDigits;
    }
};