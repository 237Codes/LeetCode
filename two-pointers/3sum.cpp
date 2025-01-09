class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result; // To store the triplets that sum to zero

        int n = nums.size();
        if (n < 3) {
            return result; // If there are less than 3 elements, there can't be any triplets.
        }

        // Sort the input array in ascending order.
        sort(nums.begin(), nums.end());

        for (int i = 0; i < n - 2; i++) {
            // Skip duplicate values to avoid duplicate triplets.
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int target = -nums[i]; // Find the two numbers that sum up to -nums[i].
            int left = i + 1; // Left pointer starts after nums[i].
            int right = n - 1; // Right pointer starts at the end of the array.

            while (left < right) {
                int sum = nums[left] + nums[right];

                if (sum == target) { // We found a triplet that sums to zero.
                    result.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicate values for left and right pointers.
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }

                    // Move both pointers to find the next triplet.
                    left++;
                    right--;
                } else if (sum < target) {
                    left++; // Move left pointer to increase the sum.
                } else {
                    right--; // Move right pointer to decrease the sum.
                }
            }
        }

        return result;
    }
};
