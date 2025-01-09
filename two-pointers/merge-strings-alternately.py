class Solution:
    def mergeAlternately(self, word1: str, word2: str) -> str:
        '''
        Understand
        - Given two strings word1 and word2
        - Merge them in alternating order
        - add the rest of the characters if one string is longer
        - return merged string
        Edge cases
        - two strings are empty
        
        Plan 
        - handle edge cases
        - Loop through the strings
        - for each iteration, add string1 character then string2 character to a new string
        - repeat for all characters 
        - add any remaining characters 
        return the merged string
        '''

        merged = ''
        
        if not word1:
            return word2
        if not word2:
            return word1
        for char1, char2 in zip(word1, word2):
            merged = merged + (char1)
            merged = merged + (char2)
        #getting the remaining characters of the string
        if len(word1) > len(word2):
            merged = merged + (word1[len(word2):])
        if len(word2) > len(word1):
            merged = merged + (word2[len(word1):])
        return merged