/*
find cycle in a graph represented as adjacent matrix
*/

#include <iostream>
#include <vector>
#include <stack>

using namespace std;

// direct graph
bool hasCycle(vector<vector<int>>& matrix){
	if(matrix.empty()) return false;
	const int n = matrix.size();
	stack<int> nodes;
	for(int i = 0; i < n; i++){
		vector<bool> visited(n,false);
		nodes.push(i);
		while(!nodes.empty()){
			int curr = nodes.top();
			nodes.pop();
			if(visited[curr]) return true;
			visited[curr] = true;
			int x = nodes.size();
			for(int j = 0; j < n; j++)
				if(matrix[curr][j]) nodes.push(j);
			if(x == nodes.size()) visited[curr] = false;
		}
	}
	return false;
}

bool DFS(vector<vector<int>>& matrix, vector<bool>& visited, int k){
	if(visited[k]) return true;
	visited[k] = true;
	const int n = matrix.size();
	for(int i = 0; i < n; i++){
		if(matrix[k][i] && DFS(matrix, visited, i)) return true;
	}
	return false;
}

// undirect graph
bool isCyclic(vector<vector<int>>& matrix){
	const int n = matrix.size();
	vector<bool> visited(n,false);
	for(int i = 0; i < n; i++){
		if(!visited[i] && DFS(matrix,visited, i)) return true;
	}
	return false;
}

int main(){
	/*
	  0 1 2 3
	0 0 1 1 0
	1 0 0 0 1
	2 0 0 0 1
	3 0 0 0 0
	*/
		/*
	  0 1 2 3
	0 0 1 1 0
	1 1 0 0 1
	2 1 0 0 1
	3 0 1 1 0
	*/
	vector<vector<int>> matrix = {{0,1,1,0}, {0,0,0,1}, {0,0,0,1}, {0,0,0,0}};
	vector<vector<int>> matrix2 = {{0,1,1,0}, {1,0,0,1}, {1,0,0,1}, {0,1,1,0}};
	//cout << hasCycle(matrix) << endl;
	cout << isCyclic(matrix2) << endl;
	return 0;
}