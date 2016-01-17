/*
从n个排好序的数组里找出k个最小值。
用了一个priority queue，用了一个map记录每个数字来自哪个数组（还要考虑重复值），另外用一个array记录每个数组下一个值在哪里（因为题目要求，没有考虑一个数组被读完的情况）。最后问了问整体的时间／空间复杂度.
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct MinHeapNode{
	int val;
	int i;
	int j;
	MinHeapNode(int x, int y, int z): val(x), i(y), j(z){}
};

struct Compare {
    bool operator()(MinHeapNode &x, MinHeapNode &y) {
    	return x.val > y.val;
    }
};

vector<int> mergeNSortedArrays(vector<vector<int>> &input){
	vector<int> res;
	const int n = input.size();
	priority_queue<MinHeapNode, vector<MinHeapNode>, Compare> numbers;
	for(int i = 0; i < input.size(); i++)
		if(!input[i].empty()) numbers.push(MinHeapNode(input[i][0],i,0));
	while(!numbers.empty()){
		MinHeapNode curr = numbers.top();
		numbers.pop();
		res.push_back(curr.val);
		curr.j++;
		if(curr.j != input[curr.i].size()) 
			numbers.push(MinHeapNode(input[curr.i][curr.j], curr.i, curr.j));
	}
	return res;
}

vector<int> findK(vector<vector<int>> &input, int k){
	vector<int> res;
	const int n = input.size();
	priority_queue<pair<int,int>> numbers;
	bool isOK = true;
	vector<int> pos(n,0);
	while(numbers.size() < k || isOK){
		isOK = true;
		for(int i = 0; i < n; i++){
			int p = pos[i];
			if(p == input[i].size()) continue;
			int num = input[i][p];
			if(numbers.size() < k){
				numbers.push(make_pair(num,p));
				isOK = false;
			}
			else if(numbers.top().first > num){
				numbers.pop();
				numbers.push(make_pair(num,p));
				isOK = false;
			}
			pos[i]++;
		}
	}
	while(!numbers.empty()){
		res.push_back(numbers.top().first);
		numbers.pop();
	}
	return res;	
}

int main(){
	vector<vector<int>> input = {{1,3,5,7}, {2,4,8},{6,9,10},{0},{}};
	//vector<int> res = mergeNSortedArrays(input);
	vector<int> res = findK(input, 3);
	for(int num : res)
		cout << num << " ";
	cout << endl;
	return 0;
}