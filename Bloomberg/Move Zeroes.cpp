/*

Move Zeroes
For example, given nums = [0, 1, 0, 3, 12], after calling your function, nums should be [1, 3, 12, 0, 0].

*/

#include <iostream>
#include <vector>

using namespace std;

void moveZeroes(vector<int>& input){
	int i = 0;
	for(int n : input)
		if(n != 0) input[i++] = n;
	for(; i < input.size(); i++)
		input[i] = 0;
}


int main(){
	vector<int> input = {1,0,0,5,2};
	moveZeroes(input);
	for(int n : input)
		cout << n << endl;
	return 0;
}