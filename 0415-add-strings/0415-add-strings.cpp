class Solution {
public:
    string addStrings(string num1, string num2) {
        string result = "";
        int carry = 0, i = num1.size() - 1, j = num2.size() - 1;

        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;
            if (i >= 0) sum += (num1[i--] - '0'); 
            if (j >= 0) sum += (num2[j--] - '0'); 
            
            result.push_back((sum % 10) + '0'); 
            carry = sum / 10; 
        }
        
        reverse(result.begin(), result.end()); 
        return result;
    }
};
