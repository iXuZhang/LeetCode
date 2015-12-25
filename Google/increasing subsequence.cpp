/*
Q1. Maximum increasing subsequence in array （直讲思路）
Q2. Maximum increasing subsequence in Tree （这个要求写代码）
Q3. Check if an array has duplicate element （也是讲思路）
Q3-2. 如果array非常大，不能放内存，怎么查重
*/

#include <iostream>
#include <vector>
using namespace std;

int longestArray(vector<int> & input){
	int res = 0;
	int curr = 1;
	for(int i = 1; i <= input.size(); i++){
		if(i < input.size() && input[i] > input[i-1]) curr++;
		else{
			res = max(res, curr);
			curr = 1;
		}
	}
	return res;
}
/*
Tree那个是连续的最大子树，比如
    2
3  3  3 
          4
最大是2,3,4，这个树不是二叉的
*/

/*
Q3 use a unordered_set;
*/
int main(){
	vector<int> input = {1,2,3,4,6,2,5,8,9,10,11};
	cout << longestArray(input) << endl;
	return 0;
}