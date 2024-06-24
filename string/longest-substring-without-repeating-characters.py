class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        # Initialize variables to keep track of the longest substring and its start position.
        maxLength = 0  # To store the length of the longest substring
        start = 0      # To store the starting index of the current substring
        
        # Create a dictionary to store characters and their last seen positions in the string.
        charMap = {}
        
        # Loop through the string
        for end in range(len(s)):
            currentChar = s[end]
            
            # If the current character is already in the dictionary and its last position is after or equal to the start of the current substring
            if currentChar in charMap and charMap[currentChar] >= start:
                # Update the start position to the character's last position + 1
                start = charMap[currentChar] + 1
            
            # Update the last position of the current character in the dictionary
            charMap[currentChar] = end
            
            # Update the maximum length if the current substring is longer
            maxLength = max(maxLength, end - start + 1)
        
        # Return the length of the longest substring
        return maxLength

        