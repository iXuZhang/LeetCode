/*
Given a string, find its first non-repeating character
Find the first unique char in a string.
Analysis of runtime and different data structure options.
*/

/*
Important !!!
1) Scan the string from left to right and construct the count array.
2) Again, scan the string from left to right and check for count of each
 character, if you find an element who's count is 1, return it.
 */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

char getFirstChar(string& s){
	vector<int> count(256,0);
	for(char c : s) count[c]++;
	for(char c : s)
		if(count[c] == 1) return c;
	return 0;
}

int main(){
	string s = "ageresfdfeeag";
	cout << getFirstChar(s) << endl;
	return 0;
}