class Solution:
    def longestObstacleCourseAtEachPosition(self, nums: List[int]) -> List[int]:
        lis = []
        for i, x in enumerate(nums):
            # Append to LIS if new element is >= last element in LIS
            if len(lis) == 0 or lis[-1] <= x:  
                lis.append(x)
                nums[i] = len(lis)
            else:
                # Find the index of the smallest number > x
                idx = bisect_right(lis, x)  
                lis[idx] = x  # Replace that number with x
                nums[i] = idx + 1
        return nums