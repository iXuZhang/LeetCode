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

struct Node{
	int val;
	int i;
	int j;
	Node(int x,int y,int z) : val(x), i(y), j(z){}
};

struct Compare{
	bool operator()(Node& i, Node&j){
		return i.val > j.val;
	}
};

vector<int> mergeNSortedArrays(vector<vector<int>>& input){
     priority_queue<Node, vector<Node>, Compare> toVisit;
     for(int i = 0; i <input.size(); i++){
     	if(!input[i].empty()) toVisit.push(Node(input[i][0], i, 0));
     }
     vector<int> res;
     while(!toVisit.empty()){
     	Node curr = toVisit.top();
     	toVisit.pop();
     	res.push_back(curr.val);
     	if(++curr.j != input[curr.i].size()) toVisit.push(Node(input[curr.i][curr.j], curr.i,curr.j));
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