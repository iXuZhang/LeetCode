/*
求一个string array 中所出现了anagram的string的一个简化集合。
e.g.
Inputs: abc,bca,cba, zxy,xyz
Outputs: abc( or bca, or cba)， zxy (or xyz)
*/

#include <iostream>
#include <unordered_set>
#include <vector>

using namespace std;

void anagramGrop(vector<string>& input){
	unordered_set<string> table;
	for(string s : input){
		sort(s.begin(),s.end());
		if(table.count(s) == 0) table.insert(s);
	}
	for(string s : table)
		cout << s <<endl;
}

int main(){
	vector<string> input = {"abc", "bca", "cba", "zxy", "xyz"};
	anagramGrop(input);
	return 0;
}