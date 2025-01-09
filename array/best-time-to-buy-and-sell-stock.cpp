

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if (prices.empty()) {  //check if the vector is empty
            return 0;
        }

        int minPrice = prices[0];  //set the min price to the first element in vector ie idx 0
        int maxProfit = 0;  //set the max price to zero

        for (int i = 1; i < prices.size(); i++) {  // loop through the vector
            int currentPrice = prices[i];       //set current price to new variable placeholder
            if (currentPrice < minPrice) {      //if value in placeholder less than min value
                minPrice = currentPrice;        //set it to min
            } else if (currentPrice - minPrice > maxProfit) {       //if value in placeholder - min > max
                maxProfit = currentPrice - minPrice;  //set max to value in placeholder - min
            }
        }

        return maxProfit;   //return max when the loop ends
    }
};
