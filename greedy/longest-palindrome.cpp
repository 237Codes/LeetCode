class Solution {
public:
    int longestPalindrome(string s) {
        // Create a hash table to count the frequency of each character in the string.
        unordered_map<char, int> charCount;
        
        // Step 1: Count the frequency of each character in the string.
        for (char c : s) {
            charCount[c]++;
        }

        int palindromeLength = 0;
        bool hasOddFrequency = false;

        // Step 2: Iterate through the characters and calculate the palindrome length.
        for (auto it = charCount.begin(); it != charCount.end(); ++it) {
            int frequency = it->second;
            
            // If the frequency is even, you can use all characters.
            if (frequency % 2 == 0) {
                palindromeLength += frequency;
            }
            // If the frequency is odd, you can use (frequency - 1) characters.
            // Also, set the flag hasOddFrequency to true.
            else {
                palindromeLength += frequency - 1;
                hasOddFrequency = true;
            }
        }

        // Step 3: If there's at least one character with odd frequency, you can use one such character at the center.
        if (hasOddFrequency) {
            palindromeLength++;
        }

        // Step 4: Return the calculated palindrome length.
        return palindromeLength;
    }
};
