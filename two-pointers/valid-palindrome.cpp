class Solution {
public:
    bool isPalindrome(string s) {
        // Initialize two pointers, 'left' and 'right', at the start and end of the string.
        int left = 0;
        int right = s.length() - 1;

        // Continue the loop until the 'left' pointer is less than the 'right' pointer.
        while (left < right) {
            // Move the 'left' pointer to the right while skipping non-alphanumeric characters.
            while (left < right && !isalnum(s[left])) {
                left++;
            }
            // Move the 'right' pointer to the left while skipping non-alphanumeric characters.
            while (left < right && !isalnum(s[right])) {
                right--;
            }

            // Compare characters at 'left' and 'right' positions after converting them to lowercase.
            if (tolower(s[left]) != tolower(s[right])) {
                return false; // If they are not equal, the string is not a palindrome.
            }

            // Move the pointers inward.
            left++;
            right--;
        }

        // If the loop completes without finding unequal characters, the string is a palindrome.
        return true;
    }
};
