/*
2个array string，由words构成，一次一边读取一个char并输出，直到一边读完，求最终输出, 比如 
array1={
"ab",
"cd"
}
array2={
"123",
"45"
}
输出：a1b2c3d4
*/

#include <iostream>
#include <vector>

using namespace std;

void printChar(vector<string> s1, vector<string> s2){
	int i1 = 0, i2 = 0;
	int j1 = 0, j2 = 0;
	while(i1 < s1.size() && i2 < s2.size()){
		if(j1 == s1[i1].size()){
			j1 = 0;
			i1++;
			while(i1 < s1.size() && s1[i1].empty()) i1++;
		}
		if(j2 == s2[i2].size()){
			j2 = 0;
			i2++;
			while(i2 < s2.size() && s2[i2].empty()) i2++;
		}
		if(i1 == s1.size() || i2 == s2.size()) break;
		cout<< s1[i1][j1++] << s2[i2][j2++];
	}
	cout << endl;
}

int main(){
	vector<string> array1 = {"ab","","cd"};
	vector<string> array2 = {"","123","45","",};
	printChar(array1, array2);
	return 0;
}