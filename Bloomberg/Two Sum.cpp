/*
Two sum
输出有效的number pair的对数，输入的数组里有重复，输出的不能有重复，
给定sum是9，（3,6）和（6,3）是一样的
给定sum是12，(6,6)只算一次只要一个
输入(3,3,3,3,3,3,6) sum = 6，返回1
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int twoSum(vector<int>& input, int target){
	unordered_map<int,int> table;
	for(int num : input) table[num]++;
	int count = 0;
	for(auto i = table.begin(); i != table.end(); ++i){
		if(table.count(target - i->first) > 0){
			if(target - i->first != i->first) count++;
			if(target - i->first == i->first && i->second > 1) count += 2;
		}
	}
	return count/2;
}

int main(){
	vector<int> input = {3,3,3,3,3,3,6,2,2,4,4};
	cout << twoSum(input, 6) << endl;
	return 0;
}
