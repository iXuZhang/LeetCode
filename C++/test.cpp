#include <iostream>
#include <set>
#include <string>

using namespace std;

int main(){
	string s = "abcdefgh";
	cout << s.substr(1,3) << endl;
	for(int i = 0; i<s.size();i++){
		cout << s[i-3]<< endl;
	}
	return 0;
}