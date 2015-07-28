class Queue {
public:
    // Push element x to the back of queue.
    void push(int x) {
       while(!front.empty()){
           back.push(front.top());
           front.pop();
       }
       back.push(x);
       while(!back.empty()){
           front.push(back.top());
           back.pop();
       }
    }

    // Removes the element from in front of queue.
    void pop(void) {
        front.pop();
    }

    // Get the front element.
    int peek(void) {
        return front.top();
    }

    // Return whether the queue is empty.
    bool empty(void) {
        return front.empty();
    }
    
private:
    stack<int> front;
    stack<int> back;
};