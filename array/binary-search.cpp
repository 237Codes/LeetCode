class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int left = 0; //points to index O of input array
        int right = nums.size() - 1;    //points to the last index of the array
        int middle;  //holds the index of the middle element
    

        while(right >= left){
            middle = left + (right - left) /2;  //clalcu;ate the middle

            if(nums[middle] == target){
                return middle; //middle is found, return the index
            }
            else if ( target < nums[middle]) {
                right = middle - 1;  //Eliminate the half that is greater than the middle and search again
            }
            else{
                left = middle + 1;     //Eliminate the half that is greater than the middle and search again
            }
        }
        return -1;  //target not found, return -1

       

    }
};