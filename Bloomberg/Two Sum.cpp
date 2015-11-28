/*
Two sum
*/

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

void twoSum(vector<int>& input, int target){
	unordered_set<int> table;
	for(int num : input){
		if(table.count(target-num) > 0)
			cout << target - num << " " << num << endl;
		table.insert(num);
	}
}

int main(){
	vector<int> input = {0, 2, 1, 4, 4, 7};
	twoSum(input, 8);
	return 0;
}