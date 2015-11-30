/*
两个array相加，求和
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> plusArray(vector<int>& v1, vector<int>& v2){
	const int m = v1.size();
	const int n = v2.size();
	if(m < n) return plusArray(v2, v1);
	v1.insert(v1.begin(), 0);
	for(int i = n-1; i >= 0; i--){
		int curr = v1[m-n+i+1] + v2[i];
		v1[m-n+i+1] = curr%10;
		v1[m-n+i] += curr/10;
	}
	if(v1[0] == 0) v1.erase(v1.begin());
	return v1;
}

int main(){
	vector<int> v1 = {1,2,3,4,5};
	vector<int> v2 = {4,3,2,1};
	vector<int> res = plusArray(v1, v2);
	for(int num : res){
		cout << num;
	}
	cout << endl;
	return 0;
}