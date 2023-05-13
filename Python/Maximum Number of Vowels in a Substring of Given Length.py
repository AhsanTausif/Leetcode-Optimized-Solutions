class Solution:
    def maxVowels(self, s: str, k: int) -> int:
        ans, cnt = 0 , 0

        # String of vowels
        vowels: str = "aeiou"
            
        # Using sliding window technique to 
        # calculate number of vowels in each window and 
        # update the count
        for i, v in enumerate(s):
            if i >= k:
                if s[i-k] in vowels:
                    cnt -= 1
            if s[i] in vowels:
                cnt += 1
            ans = max(cnt, ans)
        return ans