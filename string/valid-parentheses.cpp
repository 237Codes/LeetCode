class Solution {
public:
    bool isValid(string s) {

    std::stack<char> stack; //Create a stack to hold the brackets you are checking

    //Map they closing brackets to their opening brackets, key is 
    //closing brackets and value is opening bracket 
    std::unordered_map<char, char> brackets = {{')', '('}, {']', '['}, {'}', '{'}};   
      

    for (char c : s) { //Loop through the string xter by xter

        if (brackets.find(c) == brackets.end()) { //if find value is pointing to end of map, find value is not in map so push value to the stack
            // If it's an opening bracket, push it onto the stack
            stack.push(c);
        } else { 
            // If it's a closing bracket
            if (stack.empty() || stack.top() != brackets[c]) {  //if the stack is empty or thee top is not equal to the key of find value on map
                return false; //string not valid
            }
            stack.pop();  //remove the top of the stack
        }
    } //loop till the last xter
 
    // If the stack is empty at the end, all brackets were matched
    return stack.empty(); //return value is true if stack is empty
}
};