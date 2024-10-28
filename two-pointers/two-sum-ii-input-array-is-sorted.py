class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        # if the array is empty or has 1 element, return None
        if not nums or len(nums) < 2:
            return []
        

        # create a value called result to hold the difference between the two values
        result = 0
        output = []
        myDict = {}

        for i, num in enumerate(nums):
            result = target - num
            if result in myDict:
                return [myDict[result]+1, i+1]
            myDict[num] = i
        return []