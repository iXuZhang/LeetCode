class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        mystack.push(x);
    }

    // Removes the element on top of the stack.
    void pop() {
        // mystack is a circle !!!
        for(int i = 0; i < mystack.size()-1; i++){
            mystack.push(mystack.front());
            mystack.pop();
        }
        mystack.pop();
    }

    // Get the top element.
    int top() {
        return mystack.back();
    }

    // Return whether the stack is empty.
    bool empty() {
        return mystack.empty();
    }
    
private:
    queue<int> mystack;
};