class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> temp(m + n);
        int i = 0; //holds first element in nums1
        int j = 0; // holds first element in nums 2
        int k = 0; //holds first element of temporary array
        
        while(i < m && j < n){
            if(nums1[i] < nums2[j]){
                temp[k++] = nums1[i++];
            }
            else{
                temp[k++] = nums2[j++];
            }
        }

        //Add any other elements left
        while (i < m){
            temp[k++] = nums1[i++];
        }
        while ( j < n){
            temp[k++] = nums2[j++];
        }

        //copy temp array into nums1
        for(int idx = 0; idx < (m + n); idx++){
            nums1[idx] = temp[idx];
        }
  
    }
};