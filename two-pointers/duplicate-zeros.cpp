class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size(); //holds size of the input array
        vector<int> result(n); // Create a new array of the same size
        int pos = 0; //tracks current index in result array

        for (int i = 0; i < n; i++) {   //Loop over each element in input array
            if (pos < n) {  //check for room before inserting
                result[pos++] = arr[i];  //Insert into result and increment position
            }
            // Check if the element is zero and there's space for another zero
            if (arr[i] == 0 && pos < n) {
                result[pos++] = 0;  //Inser an additional zero and increment position
            }
        }

        // Copy the result back to the original array
        arr = result;
    }
};