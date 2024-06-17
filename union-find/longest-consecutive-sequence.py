class Solution:
    def longestConsecutive(self, nums: List[int]) -> int:
        unique_nums = set(nums)
            
        longest = 0
        for number in unique_nums:
            # consider first element in sequence
            if number - 1 not in unique_nums:
                counter = 0

                # move until sequence becomes invalid
                while number in unique_nums:
                    counter += 1
                    number += 1
            
                longest = max(counter, longest)

        return longest