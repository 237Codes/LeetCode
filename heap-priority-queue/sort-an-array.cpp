class Solution {
public:
    //create the merge function
    void merge (vector<int>&nums, int left, int middle, int right) {
        
        //initialize the sizes of the temporary arrays we want to create
        int s1 = middle - left + 1; //size of the temporary array 1
        int s2 = right - middle ;//size of the temporary array 2

        //create the temporary arrays
        int L[s1] , R[s2];

        //Populate the temporary arrays by copying data into them
        for(int i = 0; i < s1; i++){
            L[i] = nums[left + i];
        }
        for(int j = 0; j < s2; j++){
            R[j] = nums[middle + 1 + j];
        }

        //Merge the temp arrays into the main array
        int i = 0; //Holds index of first array
        int j = 0;  //Holds index of second array
        int k = left;  //Holds index of final array

        while(i < s1 && j < s2){
            if(L[i] < R[j]){
                nums[k] = L[i];
                i++;
            }
            else{
                nums[k] = R[j];
                j++;
            }
            k++;
        }


        //copy the remaining elements into the main array
        while (i < s1){
            nums[k] = L[i];
            i++;
            k++;
        }
        while (j < s2){
           nums[k] = R[j];
           j++;
           k++;
        }


    }

    void mergeSort(vector<int>&nums, int left, int right){
        //set the middle if the left is less than the right
        if(left < right){
            int middle = left + ( right - left ) / 2; // set the middle

            //recurse left side
            mergeSort(nums, left, middle);

            //recurse right side
            mergeSort(nums, middle + 1, right);

            //Merge the two halves
            merge(nums, left, middle, right);
        }
    }

    void print(vector<int> nums, int size){
        for(int i = 0; i < size ; i++){
            cout << nums[i] <<", " ;
        }
    }


    vector<int> sortArray(vector<int>& nums) {
        int size = nums.size();
        mergeSort(nums, 0, size -1);
        print(nums, size);
        return nums;
        
    }
};