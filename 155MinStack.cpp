/*
Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.

Example:
MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.
*/

//O(1) runtime, O(n) space – Extra stack:
//use an extra stack to keep track of the current minimu value. During the push operation we choose the new element
// or the current minimum, whichever that is smaller to push onto the min stack.
class MinStack {
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
       stack.push(x);
       if(min_stack.empty() || (!min_stack.empty() && x < =min_stack.top())){
       		min_stack.push(x);
       }
    }
    
    void pop() {
        if(!stack.empty()){
        	if(stack.top() == min_stack.top())
        		min_stack.pop();
        	stack.pop(x);
    	}
    }
    
    int top() {
        if(!stack.empty())
        	return stack.top();

    }
    
    int getMin() {
        if(!min_stack.empty())
        	return min_stack.top();
    }

private:
	std::stack<int> stack;
	std::stack<int> min_stack;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */