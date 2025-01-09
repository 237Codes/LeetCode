class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        // Create an array to store the frequency of each character in the magazine.
        int magazineFreq[26] = {0}; // Assuming lowercase English letters
        
        // Count the frequency of each character in the magazine.
        for (char c : magazine) {
            magazineFreq[c - 'a']++;
        }
        
        // Check if it's possible to construct the ransomNote from the magazine.
        for (char c : ransomNote) {
            // If the character doesn't exist in the magazine or its frequency is 0, return false.
            if (magazineFreq[c - 'a'] == 0) {
                return false;
            }
            
            // Decrement the frequency of the character in the magazine.
            magazineFreq[c - 'a']--;
        }
        
        // If we reach here, it means we can construct the ransomNote.
        return true;
    }
};
