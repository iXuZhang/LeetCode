/*
Find number of reciprocated edges in directed graph
给你一个set 的edges， 比如[[0,1],[1,2],[2,1]]，[1,2]跟[2,1]就是reciprocated edges，return 2
*/

#include <iostream>
#include <unordered_set>
#include <unordered_map>
#include <vector>

using namespace std;

int countEdge(vector<pair<int,int>> & edges){
	unordered_map<int,unordered_set<int>> graph;
	for(auto e : edges)
		graph[e.first].insert(e.second);
	int count = 0;
	for(auto i = graph.begin(); i != graph.end(); ++i)
		for(int num : i->second)
			if(graph[num].count(i->first) > 0)
				count++;
	return count;
}


int main(){
	vector<pair<int,int>> edges = {{1,2},{2,3},{3,4},{2,1},{4,3}};
	cout << countEdge(edges) << endl;
	return 0;
}