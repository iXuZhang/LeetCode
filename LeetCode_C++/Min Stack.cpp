// Min Stack
class MinStack {
public:
    void push(int x) {
        table.push(x);
        if( minTable.empty() || x <= minTable.top()) minTable.push(x);
    }

    void pop() {
        if(minTable.top() == table.top()) minTable.pop();
        table.pop();
    }

    int top() {
        return table.top();
    }

    int getMin() {
        return minTable.top();
    }
private:
    stack<int> minTable;
    stack<int> table;
};