class Solution {
public:
    int firstUniqChar(string s) {
        //use an unordered map to count the frequency of each character in the string
        unordered_map<char, int> charCount;

        //we iterate over each character while incrementing its count
        for(char c : s){
            charCount[c]++;
        }

        //find the first Unique character
        for (int i = 0; i<s.length(); i++){
            if(charCount[s[i]] == 1){
                return i;       //retun the index of the character that has count 1
            }
        }
        return -1;  //no unique character found so we return -1
    }
};