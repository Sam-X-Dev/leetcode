class Solution {
public:
        int fib(int n) {
        // Base case:
        // If n is 0 or 1, return n directly
        if (n <= 1) return n;

        // prev2 = F(0), prev1 = F(1)
        int prev2 = 0;
        int prev1 = 1;

        // Loop from 2 to n to build Fibonacci iteratively
        for (int i = 2; i <= n; i++) {
            // Current Fibonacci number
            int curr = prev1 + prev2;

            // Shift values for next iteration
            prev2 = prev1;
            prev1 = curr;
        }

        // Final result stored in prev1
        return prev1;
    }
};