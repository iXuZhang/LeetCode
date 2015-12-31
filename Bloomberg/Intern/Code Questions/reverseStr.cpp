/*
把_ _ _ Google _ _ _ Apple _ IBM _ _ _ _ _ _ VMware _ _ Dell _   把公司名称提取出来从后往前输出；
followup: reverse the char array in place, result like: _ Dell _ _ VMware _ _ _ _ _...... _ _ _ Google _ _ _
*/

#include <iostream>
#include <string>

using namespace std;

string reverseStr(string& s){
	string res;
	string curr;
	const int n = s.size();
	for(auto i = n - 1; i >= 0; i--){
		if(s[i] == ' ' || s[i] == '_'){
			res += curr;
			curr = "";
			res += s[i];
		} 
		else curr = s[i] + curr;
	}
	return res + curr;
}

int main(){
	string s = "_ _ Google _ _ _Apple _ IBM _ _ _ _ Dell _ ";
	cout << reverseStr(s) << endl;
	return 0;
}