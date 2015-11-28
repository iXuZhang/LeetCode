/*
Remove duplicate characters in a string
比如，Welcome --> Wlcom
注：同一字母大小写不算重复
*/

#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;

string removeDuplicate(string& s){
	string res;
	unordered_map<char, int> table;
	for(char c : s)
		table[c]++;
	for(char c : s)
		if(table[c] == 1) res += c;
	return res;
}

int main(){
	string s = "Weclome";
	cout << removeDuplicate(s) << endl;
	return 0;
}