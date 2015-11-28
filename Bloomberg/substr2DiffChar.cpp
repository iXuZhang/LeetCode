/*
	longest substring with at most two distinct characters
	aaababbccccaa
*/

#include <iostream>
#include <string>
#include <vector>
#include <unordered_set>

using namespace std;

string substr2DiffChar(string& s){
	const int n = s.size();
	if(n <= 2) return s;
	int begin = 0, len = 0, curr = 0, start = 0;
	unordered_set<int> table;
	for(int i = 0; i < n + 1; i++){
		if(i < n && table.count(s[i]) > 0) curr++;
		else if(table.size() < 2){
			table.insert(s[i]);
			curr++;
		}
		else{
			if(len < curr){
				len = curr;
				begin = start;
			}
			start = i - 1;
			while(s[start] == s[start-1]) start--;
			curr = i - start + 1;
			if(i < n) table.insert(s[i]);
			table.erase(s[start-1]);
		}
	}
	return s.substr(begin, len);
}

int main(){
	string s = "abcaaagggssseeeeee";
	cout << substr2DiffChar(s) << endl;
	return 0;
}