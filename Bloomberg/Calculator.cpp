/*
	implement a calculator with +，-，x, /，（)
*/

#include <iostream>
#include <string>
#include <stack>

using namespace std;

int calculate(string &s){
	stack<char> signs;
	stack<int> numbers;
	signs.push('+');
	numbers.push(0);
	int curr = 0;
	for(char c : s){
		if(c == '+'||c == '-'){
			if(signs.top() == '+') numbers.top() += curr;
			else if(signs.top() == '-') numbers.top() -= curr;
			else if(signs.top() == '*') numbers.top() *= curr;
			else numbers.top() /= curr;
			signs.pop() = c;
			curr = 0;
		}
		else if(c == '*'||c == '/'){

		}
		else if(c == '('){
			numbers.push(curr);
		}
		else if(c == ')'){

		}
		else if(isdigit(c))
			curr = curr*10 + c - '0';
	}
	return res.top();
		}
}

int main(){
	string s = "1+4-5*6-(-5+6)*7";
	cout << calculate(s) << endl;
	return 0;
}