class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        if not s: # An empty string is a subsequence of any string
            return True
        index = 0
        for letter in t:
            if index < len(s) and letter == s[index]:
                index += 1
            if index == len(s):
                return True
        return False

