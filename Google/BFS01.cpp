/*
一个房间，有一些器材，有墙，找一个点，到所有器材距离和最短。
*/

/*
BFS
*/

#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void Calculate(vector<vector<int>>& input){
	queue<pair<int,int>> q;
	vector<vector<int>> res(input.size(),vector<int>(input[0].size(),0));
	for(int i = 0; i < input.size();i++)
		for(int j = 0; j< input[i].size(); j++){
			if(input[i][j] == 1){
				int step = 0;
				q.push(make_pair(i,j));
				vector<vector<bool>> visited(input.size(),vector<bool>(input[0].size(),false));
				while(!q.empty()){
					int len = q.size();
					for(int k = 0; k < len; k++){
						pair<int,int> curr = q.front();
						q.pop();
						int i = curr.first;
						int j = curr.second;
						if(i < 0 || j < 0 || i >= input.size() || j >= input[0].size() 
							|| input[i][j] == -1 || visited[i][j] == true) continue;
						res[i][j] += step;
						visited[i][j] = true;
						q.push(make_pair(i,j+1));
						q.push(make_pair(i,j-1));
						q.push(make_pair(i+1,j));
						q.push(make_pair(i-1,j));
					}
					step++;
				}
			}
		}
	for(int i = 0; i < res.size(); i++){
		for(int j = 0; j< res[i].size(); j++)
			cout <<res[i][j]<<" ";
		cout << endl;
	}
}

int main(){
	// 1: equipments;
	// -1: wall
	vector<vector<int>> input = {
		{1,0,0,1},
		{0,-1,0,0},
		{0,-1,0,-1},
		{1,0,0,1}
	};
	Calculate(input);
	return 0;
}