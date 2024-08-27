class Solution {
public:
    bool isvowel(char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}

int maxVowels(string s, int k) {
    int maxVowelsCount = 0, currentVowelsCount = 0;

    // Initial count of vowels in the first k characters
    for (int i = 0; i < k; i++) {
        if (isvowel(s[i])) {
            currentVowelsCount++;
        }
    }
    
    // Set the initial max count
    maxVowelsCount = currentVowelsCount;

    // Slide the window across the string
    for (int i = k; i < s.size(); i++) {
        // Add the new character
        if (isvowel(s[i])) {
            currentVowelsCount++;
        }
        // Remove the old character
        if (isvowel(s[i - k])) {
            currentVowelsCount--;
        }
        // Update the max count
        maxVowelsCount = max(maxVowelsCount, currentVowelsCount);
    }

    return maxVowelsCount;
}

};