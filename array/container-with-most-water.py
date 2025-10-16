class Solution(object):
    def maxArea(self, height):
        """
        :type height: List[int]
        :rtype: int
        """
    # two pointers 
        left = 0
        right = len(height) - 1
        maxContainer = 0
        spaces = len(height) - 1
        area = 0

        while left != right:
            minValue = min(height[left], height[right])
            area = spaces * minValue
            maxContainer = max(area, maxContainer)
            if height[left] < height[right]:
                left += 1
                spaces -= 1
            else:
                right -= 1
                spaces -= 1
        return maxContainer

