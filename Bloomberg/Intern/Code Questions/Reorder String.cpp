/*
“给你一个完全由大写和小写字母组成的String，按照出现频率返回新的String，区分大小写。
举个例子，ABCAabcABa -> AAAaaBBbcC，AAA在最前面因为它的出现频率最高。
如果频率一样的话我不在乎谁先谁后，当然如果能按lexicographical order返回更好。”
*/

#include <iostream>
#include <vector>

using namespace std;

string reorderStr(string& s){
	vector<int> table(52,0);
	for(char c : s)	// A 65 a 97
		if(c >= 'a') table[c -'a']++;
		else table[c - 'A' + 26]++;
	vector<pair<int,char>> table2;
	for(int i = 0; i < 26; i++)
		if(table[i]) table2.push_back(make_pair(table[i],'a'+i));
	for(int i = 26; i < 52; i++)
		if(table[i]) table2.push_back(make_pair(table[i],'A'+ i -26));
	sort(table2.begin(), table2.end(), [](pair<int,char>& i, pair<int,char>&j){return i.first > j.first;});
	string res;
	for(auto p : table2)
		res += string(p.first, p.second);
	return res;
}


int main(){
	string s = "ABCAabcABa";
	cout<<reorderStr(s)<<endl;
	return 0;
}