class Solution:
    def isSubsequence(self, s: str, t: str) -> bool:
        index = 0
        for letter in t:
            if letter == s[index]:
                if index < len(s):
                    index += 1
            if index == len(s) - 1:
                return True
        return False

