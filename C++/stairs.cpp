class Solution {
public:
    int climbStairs(int n) {
        vector<int> dp(n+1,0);
        int k = 2;
        dp[0] = dp[1] = 1;

        for(int i=2;i<=k;i++){
            dp[i] = 2*dp[i-1];
        }

        for(i=k+1;i<=n;i++){
            dp[i] = dp[i-1] + dp[i-k-1];
        }

        return dp[n];
    }
};