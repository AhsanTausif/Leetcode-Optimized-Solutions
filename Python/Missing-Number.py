class Solution:
    def missingNumber(self, nums: List[int]) -> int:
        s = 0
        for i in nums:
           s = s ^ i
        for i in range(len(nums)):
           s = s ^ i
        s = s ^ (i + 1)

        return s 