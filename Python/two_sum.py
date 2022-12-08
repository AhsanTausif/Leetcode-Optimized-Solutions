class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        check = {}
        
        for i, value in enumerate(nums):
            remaining = target - nums[i]
            
            if remaining in check:
                return [i, check[remaining]]
            else:
                check[value] = i