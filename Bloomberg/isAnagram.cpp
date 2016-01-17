/*

tell if a string is anagram

*/

#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isAnagram(string& s1, string& s2){
	if(s1.size() != s2.size()) return false;
	unordered_map<char,int> table;
	for(char c : s1)
		table[c]++;
	for(char c : s2)
		table[c]--;
	for(auto i = table.begin(); i != table.end(); ++i)
		if(i->second != 0) return false;
	return true;
}

int main(){
	string s1 = "aacd";
	string s2 = "cdaa";
	cout << isAnagram(s1,s2) << endl;
	return 0;
}