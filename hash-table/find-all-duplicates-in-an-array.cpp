class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map <int, int> intCount;  //Map stores numbers and their frequesncy
        vector<int> result;     //stores the dupplicate elemt found

        for(auto i : nums){     //iterate over the nums vector
            if(intCount[i] == 1){   //if this is 1, element already seen
                result.push_back(i);    //send to result vector
            }
            else{
                intCount[i]++;  //just add and increment the frq in the map
            }
        }


        return result;  //return the vector containing duplicate elements
    }   
};