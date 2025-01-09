class Solution {
public:
    bool isAnagram(string s, string t) {
        // Check if the lengths of the two strings are different.
        // If they are different, they cannot be anagrams.
        if (s.length() != t.length()) {
            return false;
        }

        // Initialize an array to keep track of the frequency of each character in string s.
        // We assume that the strings only contain lowercase English letters, so we use a fixed-size array of length 26.
        int charCount[26] = {0};

        //we subract "a" so that each position shifts one place to the left and we can get 0 - 25 as indexes of all alphabets


        // Iterate through string s and update the character frequency in the charCount array.
        //this adds all the characters into the array of char
        for (char c : s) {
            charCount[c - 'a']++; // Convert the character to its index in the array.
        }

        // Iterate through string t and update the character frequency in the charCount array.
        //Now we remove all the characters from the array of char
        for (char c : t) {
            charCount[c - 'a']--;

            // If the count becomes negative, it means there are more occurrences of this character in string t than in string s.
            // In this case, t cannot be an anagram of s.
            if (charCount[c - 'a'] < 0) {
                return false;
            }
        }

        // If we have successfully iterated through both strings without any early return, they are anagrams.
        return true;
    }
};
