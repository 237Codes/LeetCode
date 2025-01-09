class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        //create two pointers, left and right of the vector
        
        int left = 0; //first pointer at the beginning or index 0
        int right = nums.size() - 1; //second pointer at the end or index size - 1
        int middle; //holds the middle index

        while (left <= right){
            
            middle = left + (right - left) / 2;  //Find the middle
            
            if (nums[middle] == target){
                return middle;  //return the middle index if its content is equal to the target
            }
            else if ( nums[middle] < target){
                left = middle + 1;  //shift the left index  forward by one 
            }
            else {
                right = middle -1;  //shift the right index backward by one
            }

        }
        return left;  //keft index holds the correct value to be returned
    }
};