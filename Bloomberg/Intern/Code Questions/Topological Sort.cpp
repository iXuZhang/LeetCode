/*
topological sort
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <queue>

using namespace std;

void topoSort(vector<pair<int,int>> input, int n){
	vector<unordered_set<int>> graph(n);
	for(auto p : input)
		graph[p.first].insert(p.second);
	vector<int> indegree(n,0);
	for(auto s : graph)
		for(int i : s)
			 indegree[i]++;
	vector<int> res;
	queue<int> sources;
	for(int i = 0; i < n; i++)
		if(indegree[i] == 0) sources.push(i);
	for(int i = 0; i < n; i++){
		if(sources.empty()) return;
		int node = sources.front();
		res.push_back(node);
		sources.pop();
		for(int n : graph[node]){
			indegree[n]--;
			if(indegree[n] == 0) sources.push(n);
		}
	}
	for(int n : res)
	cout << n << "  ";
}

int main(){
	vector<pair<int,int>> input;
	input.push_back(make_pair(0,4));
	input.push_back(make_pair(4,3));
	input.push_back(make_pair(3,2));
	input.push_back(make_pair(2,1));
	topoSort(input, 5);
	return 0;
}