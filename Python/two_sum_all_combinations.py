class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
       
       for left, right in range(len(nums)-1):
           right = len(nums)-1
           while left < right:
              temp_sum = nums[left]+nums[right]
              if temp_sum > target:
                 right = right - 1
              elif temp_sum < target:
                 left += 1
              else:
                 return [left+1, right+1]       