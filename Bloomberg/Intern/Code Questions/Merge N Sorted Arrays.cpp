/*
merge N sorted arrays
*/

/*
key:
use a heap to track N min number
n*m(logn)
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

struct MinHeapNode{
	int val;
	int i;
	int j;
	bool operator<(MinHeapNode& other){
        return val > other.val;
    }
	MinHeapNode(int x, int y, int z):val(x), i(y), j(z){}
};

struct Compare {
    bool operator()(MinHeapNode &x, MinHeapNode &y) {
    	return x.val > y.val;
    }
};

vector<int> mergeNSortedArrays(vector<vector<int>> &input){
	vector<int> res;
	const int n = input.size();
	priority_queue<MinHeapNode,vector<MinHeapNode>,Compare> candidates;
	for(int i = 0; i < n; i++)
		if(!input[i].empty())
		candidates.push(MinHeapNode(input[i][0], i, 0));
	while(!candidates.empty()){
		MinHeapNode curr = candidates.top();
		candidates.pop();
		res.push_back(curr.val);
		if(curr.j + 1 < input[curr.i].size()) 
			candidates.push(MinHeapNode(input[curr.i][curr.j+1], curr.i, curr.j+1));
	}
	return res;
}

int main(){
	vector<vector<int>> input = {{1,3,5,7}, {2,4,8},{6,9,10},{0},{}};
	vector<int> res = mergeNSortedArrays(input);
	for(int num : res)
		cout << num << " ";
	cout << endl;
	return 0;
}