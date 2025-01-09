class Solution {
public:
    bool isUgly(int n) {
        // Base case: If n is less than or equal to 0, it cannot be an ugly number.
        if (n <= 0) {
            return false;
        }

        // Repeatedly divide n by 2 until it's no longer divisible by 2.
        while (n % 2 == 0) {
            n /= 2;
        }

        // Repeatedly divide n by 3 until it's no longer divisible by 3.
        while (n % 3 == 0) {
            n /= 3;
        }

        // Repeatedly divide n by 5 until it's no longer divisible by 5.
        while (n % 5 == 0) {
            n /= 5;
        }

        // After performing these divisions, if n becomes 1, it means that all of its
        // prime factors are limited to 2, 3, and 5, and it's an ugly number.
        return n == 1;
    }
};
