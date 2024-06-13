class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        #create a hash map to store the complement and its index
        numMap = {}

        #Loop through the entire list of numbers
        for i in range(len(nums)):
            #calculate the compliment
            compliment = target - nums[i]
            #ccheck if compliment is found in map
            if compliment in numMap:
                #return two indices
                return [numMap[compliment], i]
            else:
                #Add current number and its index to map
                numMap[nums[i]] = i
        #return empty list if no two numbers add up to target
        return []