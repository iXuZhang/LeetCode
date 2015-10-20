// Implement Stack using Queues
class Stack {
public:
    // Push element x onto stack.
    void push(int x) {
        table.push(x);
        for(int i = 0; i < table.size()-1; i++){
            table.push(table.front());
            table.pop();
        }
    }

    // Removes the element on top of the stack.
    void pop() {
        table.pop();
    }

    // Get the top element.
    int top() {
        return table.front();
    }

    // Return whether the stack is empty.
    bool empty() {
        return table.empty();
    }
private:
    queue<int> table;
};