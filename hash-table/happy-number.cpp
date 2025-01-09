class Solution {
public:
    int calculateSquareSum(int n) {
        int sum = 0;
        while (n > 0) {
            int digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        // Use two pointers approach to detect a cycle.
        int slow = n;
        int fast = calculateSquareSum(n);

        while (slow != fast) {
            slow = calculateSquareSum(slow);
            fast = calculateSquareSum(calculateSquareSum(fast));
        }

        // If the cycle includes 1, it's a happy number.
        return slow == 1;
    }
};
