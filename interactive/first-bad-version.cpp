// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1;           // Initialize the left boundary of the search range to 1.
        int right = n;          // Initialize the right boundary of the search range to n.

        while (left < right) {  // Continue the search until the left boundary is less than the right boundary.
            int mid = left + (right - left) / 2; // Calculate the middle version to check.

            if (isBadVersion(mid)) {
                // If the middle version is bad, we move the right boundary to the middle.
                right = mid;
            } else {
                // If the middle version is not bad, we move the left boundary to the version after mid.
                left = mid + 1;
            }
        }
        
        // At this point, left and right are equal, and they point to the first bad version.
        return left;
    }
};
