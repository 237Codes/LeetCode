class MyQueue {
public:
    MyQueue() {
        
    }
    
        void push(int x) {
        // Push an element onto the "push" stack
        pushStack.push(x);
    }
    
    int pop() {
        // Check if the "pop" stack is empty
        // If it's empty, transfer elements from "push" stack to "pop" stack
        if (popStack.empty()) {
            while (!pushStack.empty()) {
                popStack.push(pushStack.top());
                pushStack.pop();
            }
        }
        
        // Pop the front element from the "pop" stack
        int frontElement = popStack.top();
        popStack.pop();
        
        return frontElement;
    }
    
    int peek() {
        // Similar to pop, check and transfer if necessary
        if (popStack.empty()) {
            while (!pushStack.empty()) {
                popStack.push(pushStack.top());
                pushStack.pop();
            }
        }
        
        // Return the front element without popping it
        return popStack.top();
    }
    
    bool empty() {
        // The queue is empty if both stacks are empty
        return pushStack.empty() && popStack.empty();
    }

private:
    std::stack<int> pushStack; // Stack for pushing elements
    std::stack<int> popStack;  // Stack for popping and peeking elements
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */