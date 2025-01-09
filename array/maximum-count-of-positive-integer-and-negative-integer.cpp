class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int idx = 0;

        for(idx; idx < nums.size(); idx++){
            if(nums[idx] < 0){
                neg++;
            }
            if(nums[idx] > 0){
                pos++;
            }
        }
        return max(pos, neg);
    }
};