class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        # Create a dictionary to store anagrams and their corresponding groups
        anagram_map = defaultdict(list)

        # Iterate through the input strings
        for s in strs:
            # Sort the characters in the current string to create a unique key
            key = ''.join(sorted(s))

            # Add the original string to the corresponding group (sorted key)
            anagram_map[key].append(s)

        # Create the result list to store the grouped anagrams
        result = list(anagram_map.values())

        return result


