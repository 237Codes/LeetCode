class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        #Create a Map to hold values in list
        seen = {}
        #Traverse List and Seacrch map if number already exist, else add it to map
        for num in nums:
            if num in seen:
                return True
            else:
                seen[num] = None
        return False