/*
给一个数组，一个sliding window size，求sliding window size里的平均数
e.g. input:[3,2,1,2,3], 2; output: [2.5, 1.5, 1.5, 2.5]
*/

#include <iostream>
#include <vector>

using namespace std;

vector<double> sliding(vector<int> &input, double k){
	vector<double> res;
	int sum = 0;
	for(int i = 0; i < input.size(); i++){
		sum += input[i];
		if(i > k - 1) sum -= input[i - k]; // sum is from i - k + 1 to i 
		if(i >= k - 1) res.push_back(sum/k);
	}
	return res;
}

int main (){
	vector<int> input = {3,2,1,2,3};
	vector<double> res = sliding(input, 2);
	for(double num : res)
		cout << num << " ";
	cout << endl;
	return 0;
}