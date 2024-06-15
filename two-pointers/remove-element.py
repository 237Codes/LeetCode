from typing import List

class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        left = 0  # Set left pointer
        right = len(nums) - 1  # Set right pointer

        while left <= right:  # While the two pointers do not cross
            if nums[right] == val:  # If right pointer value == val we are given
                right -= 1  # Decrement right pointer to move towards left side
            elif nums[left] == val:  # If left pointer value == val we are given
                nums[left], nums[right] = nums[right], nums[left]  # Switch left value with right value
                right -= 1  # Decrement right pointer after swapping
            else:
                left += 1  # Else increment left pointer

        return left  # Return the new length of the resulting list
