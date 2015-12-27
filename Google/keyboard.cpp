/*
第一轮是中国小哥，问题是 给定一个9位的键盘，

1 2 3
4 5 6
7 8 9
只有中间没有其他键的两个键才能相连，比如1可以连 2 4 5 6 8 但不能连 3 7 9
但是如果中间键被使用了，那就可以连，比如5已经被使用了，那1就可以连9
每个键只能用一次，给定一个长度L，求问有多少unique path with length L
*/

// Key backtracking

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void backTracking(vector<sting>& res, string curr, int L, int prev, vector<vector<bool>>& canReach, vector<boo>& visited){
	if(L == 0) {
		res.push_back(curr);
		return 
	}
	for(int i = 0; i < 9; i++){
		if(!visited[i] && canReach[prev][i]){
			vistited[i] = true;
			if(i + 1 == 5){}
			else if(i + 1 == 2){}
			else if(i + 1 == 4){}	
			backTracking(res, curr+(i+1+'0'), L-1, i, canReach,visited);
			if(){

			}
			vistited[i] = false;
		}
	}

}  

int main(){
	vector<sting> res;
	vector<bool> visited(9,false);
	vector<vector<bool>> canReach = {
		{true,true,false,true,true,true,false,true,false},
		{true,true,true,true,true,true,true,false,true},
		{false,true,true,true,true,true,false,true,false},
		{true,true,true,true,true,true,false,true,true},
		{true,true,true,true,true,true,true,true,true},
		{true,true,true,false,true,true,true,true,true},
		{false,true,false,true,true,true,true,true,false},
		{true,false,true,true,true,true,true,true,true},
		{false,true,false,true,true,true,false,true,true},
		{true,true,true,true,true,true,true,true,true},
	}
	backTracking(res, curr+(i+1+'0'), L-1, 10, canReach,visited);
	for(string s : res)
		cout << s <<endl;
	return 0;
}