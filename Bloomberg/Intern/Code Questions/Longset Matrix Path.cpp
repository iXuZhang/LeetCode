/*
给一个m行n列的矩阵和一个开始的位置，要求返回最长的进行相同加减运算的路径。
比如开始的点的值是5. 
那可以走下去的路径比如可以是5->9->13->17 (都是+4）
或者5->4->3->2（都是-1）或者5->5->5这样
*/

#include <iostream>
#include <vector>

using namespace std;

void DFS(int i, int j, vector<vector<int>>& matrix,vector<vector<bool>>& visited, string curr, int diff, int prev, string& res){
	if(i < 0 || i >= matrix.size() || j < 0 || j >= matrix[0].size() || visited[i][j]) return;
	if(matrix[i][j] - prev != diff) return;
	visited[i][j] = true;
	curr += "->" + to_string(matrix[i][j]);
	if(curr.size() > res.size()) res = curr;
	DFS(i+1,j,matrix,visited,curr,diff,matrix[i][j],res);
	DFS(i,j+1,matrix,visited,curr,diff,matrix[i][j],res);
	DFS(i-1,j,matrix,visited,curr,diff,matrix[i][j],res);
	DFS(i,j-1,matrix,visited,curr,diff,matrix[i][j],res);
	visited[i][j] = false;
}


int main(){
	/*
		9 2 3
	    8 1 4
		7 6 5
	*/
	vector<vector<int>> matrix = {{9,2,3},{8,1,4},{7,6,5}};
	int i = 1;
	int j = 1;
	vector<vector<bool>> visited(3,vector<bool>(3,false)); 
	visited[i][j] = true;
	string res;
	DFS(i,j+1,matrix,visited,to_string(matrix[i][j]), matrix[i][j+1] - matrix[i][j], matrix[i][j], res);
	DFS(i+1,j,matrix,visited,to_string(matrix[i][j]), matrix[i+1][j] - matrix[i][j], matrix[i][j], res);
	DFS(i,j-1,matrix,visited,to_string(matrix[i][j]), matrix[i][j-1] - matrix[i][j], matrix[i][j], res);
	DFS(i-1,j,matrix,visited,to_string(matrix[i][j]), matrix[i-1][j] - matrix[i][j], matrix[i][j], res);
	cout << res << endl;
	return 0;
}