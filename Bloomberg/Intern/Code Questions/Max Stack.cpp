/*
	max stack, implement getMax()
*/

#include <iostream>
#include <stack>

using namespace std;

class MaxStack {
public:	
	void push(int x){
		table.push(x);
		if(maxtable.empty() || maxtable.top() <= x) maxtable.push(x);
	}

	void pop(){
		if(maxtable.top() == table.top()) maxtable.pop();
		table.pop();
	}

	int top(){
		return table.top();
	}

	int getMax(){
		return maxtable.top();
	}

	bool empty(){
		return table.empty();
	}
private:
	stack<int> table;
	stack<int> maxtable;
};

int main(){
	MaxStack myStack;
	myStack.push(5);
	cout<<myStack.getMax()<<endl;
	myStack.push(10);
	cout<<myStack.getMax()<<endl;
	myStack.push(7);
	cout<<myStack.getMax()<<endl;
	myStack.pop();
	myStack.pop();
	cout<<myStack.getMax()<<endl;
	return 0;
}