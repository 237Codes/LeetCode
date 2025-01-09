class Solution {
public:
    int climbStairs(int n) {
        // Create an array to store the number of distinct ways to reach each step.
        // Initialize it with 0 as there are no ways to reach the steps yet.
        vector<int> dp(n + 1, 0);

        // There is one way to reach step 0 (base case).
        dp[0] = 1;

        // There is one way to reach step 1 (by taking one step from step 0).
        dp[1] = 1;

        // Iterate from step 2 to the target step n.
        for (int i = 2; i <= n; i++) {
            // To reach step i, you can either take one step from step (i-1)
            // or two steps from step (i-2). The total number of ways is the sum of these two possibilities.
            dp[i] = dp[i - 1] + dp[i - 2];
        }

        // The result for step n is the answer to the problem.
        return dp[n];
    }
};
