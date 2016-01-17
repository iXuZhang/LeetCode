/*
一个排序好的数组，问存不存在一个popular value，其个数超过n/4，可用二分 log(n)时间
如果popular value存在， 则n/4、n/2、3n/4位置处的数字至少有一个是popular value，只要对这三个位置上的数用二分找边界即可
*/

#include <iostream>
#include <vector>
using namespace std;

int findV(vector<int>& input){
	const int n = input.size();
	cout << n << endl;
	for(int i = n; i <= 3*n; i += n){
		int m = input[i/4];
		auto j1 = upper_bound(input.begin(), input.end(), m);
		auto j2 = lower_bound(input.begin(), input.end(), m);
		cout << j1 - input.begin() << " " << j2 - input.begin() << endl;
		if(j1 - j2 > n/4) return input[m];
	}
	return 0;
}

int main(){
    vector<int> input = {1,1,2,3,4,4,4,4,6,7,8,9};
	cout << findV(input)<<endl;
	return 0;
}