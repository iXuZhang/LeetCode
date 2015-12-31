/*
print sorted characters(string input)
{
	input: “Welcome”
    output: e:2;
            w:1;
            l:1;
            c:1;
            o:1
            m:1;
}
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

void printeSortedCharacters(string s){
	unordered_map<char,int> table;
	for(char c : s){
		if(c >= 'a' && c <= 'z') table[c]++;
		else if( c >= 'A' && c <= 'Z') table[c-'A'+'a']++;
		else table[c]++;
	}
	vector<pair<int, char>> table2;
	for(auto i = table.begin(); i != table.end(); ++i)
		table2.push_back(make_pair(i->second, i->first));
	sort(table2.begin(),table2.end());
	for(auto i = table2.rbegin(); i!= table2.rend(); ++i)
		cout<< i->second << ":" << i->first << endl;
}

int main(){
	printeSortedCharacters("Welcome");
	return 0;
}