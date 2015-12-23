// Abbreviation
// 比如输入aabbccccaa, 输出 a2b2c4a2

#include <iostream>
#include <string>

using namespace std;

string Abbreviation(string s){
	const int n = s.size();
	string res;
	int count = 0;
	for(int i = 0, j = 0; j <= n; j++){
		if(j < n && s[i] == s[j]){
			count++;
		}
		else{
			res += s[i] + to_string(count);
			i = j;
			count = 1;
		}
	}
	return res;
}

int main(){
	string s = "aabbccccaa";
	cout << Abbreviation(s) << endl;
	return 0;
}