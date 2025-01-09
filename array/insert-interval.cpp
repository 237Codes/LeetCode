class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> result; // Initialize a vector to store the result intervals
        int n = intervals.size(); // Get the number of intervals
        int i = 0; // Initialize a variable to keep track of the current interval being processed

        // Add all intervals that come before the newInterval
        while (i < n && intervals[i][1] < newInterval[0]) {
            result.push_back(intervals[i]); // If the current interval ends before the newInterval starts, add it to the result
            i++; // Move to the next interval
        }

        // Merge overlapping intervals with newInterval
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(newInterval[0], intervals[i][0]); // Merge the overlapping intervals by updating the newInterval's start
            newInterval[1] = max(newInterval[1], intervals[i][1]); // Merge the overlapping intervals by updating the newInterval's end
            i++; // Move to the next interval
        }
        result.push_back(newInterval); // Add the merged (or new) interval to the result

        // Add all intervals that come after the newInterval
        while (i < n) {
            result.push_back(intervals[i]); // If there are remaining intervals, add them to the result
            i++; // Move to the next interval
        }

        return result; // Return the result with the merged and non-overlapping intervals
    }
};
