class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        //Initialize two pointers
        int l = 0; //holds first array. index
        int r = nums.size() - 1;    //holds second array index
        int mid;    //holds middle value

        while (l < r ){     //loop until the pointers cross over each other
            
            mid = l + (r-l)/2;      //set the middle value
            
            //Ensure that mid is even by decrementing it if it is odd
            //This is because, each pair starts at an even index
            //So for any given even index, the right neigbor should 
            //be the same number

            if(mid % 2 == 1){
                mid--;
            }

            // Check pairs
            // If the right nieghbor is not equal, there is a mismatch on the left side
            // move the right pointer to the middle
            // Else move the left pointer by 2


            if (nums[mid] != nums[mid + 1]) {  //if there is a mismatch
                r = mid;    //move the right to the middle
            } else {
                // Move the left forward by two which skips the matching pair
                // And goes to the next pair
                l = mid + 2;  
            }  

        }
        return nums[l];
        
    }
};