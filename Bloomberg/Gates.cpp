/*
给定matrix
0 0 0
B G G
0 0 0
找到每个0到G的最短距离

输出：
2 1 1
B G G
2 1 1

*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void calculateDistence(vector<vector<char>>& input){
	if(input.empty()) return;
	queue<pair<int,int>> table;
	const int m = input.size();
	const int n = input[0].size();
	for(int i = 0; i < m; i++)
		for(int j = 0; j < n; j++)
			if(input[i][j] == 'G'){
				table.push(make_pair(i+1,j)); 
				table.push(make_pair(i,j+1)); 
				table.push(make_pair(i-1,j)); 
				table.push(make_pair(i,j-1)); 
			}
	char step = '0';
	while(!table.empty()){
		int len = table.size();
		step++;
		for(int k = 0; k < len; k++){
			int i = table.front().first;
			int j = table.front().second;
			table.pop();
			if(i < 0 || i >= m || j < 0 || j >= n || input[i][j] == 'B' || input[i][j] == 'G')
				continue;
			if(input[i][j] != '0' && input[i][j] < step) continue;
			input[i][j] = step;
			table.push(make_pair(i+1,j)); 
			table.push(make_pair(i,j+1)); 
			table.push(make_pair(i-1,j)); 
			table.push(make_pair(i,j-1)); 

		}
	}
}

int main(){
	vector<vector<char>> input = {{'0','0','0'},{'B','G','G'},{'0','0','0'}};
	calculateDistence(input);
	for(auto m : input){
		for(char c : m)
			cout << c << " ";
		cout << endl;
	}
	return 0;
}
