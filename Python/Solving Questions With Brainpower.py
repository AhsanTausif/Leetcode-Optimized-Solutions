class Solution:
    def mostPoints(self, questions: List[List[int]]) -> int:
        # Time Complexity: O(N)
        # Space Complexity: O(N)

        dp = {}

        for i in range(len(questions) - 1, -1, -1):
            dp[i] = max(
                questions[i][0] + dp.get(i + 1 + questions[i][1], 0), # solve current problem
                dp.get(i + 1, 0) # skip current problem
            ) 
        return dp[0]    