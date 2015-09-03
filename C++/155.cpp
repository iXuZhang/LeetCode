class MinStack {
public:
    void push(int x) {
        mystack.push(x);
        if(minstack.empty()||x <= minstack.top()) minstack.push(x);
    }

    void pop() {
        if(mystack.top() == minstack.top()) minstack.pop();
        mystack.pop();
    }

    int top() {
        return mystack.top();
    }

    int getMin() {
        return minstack.top();
    }
    
private:
    stack<int> mystack;
    stack<int> minstack;
};