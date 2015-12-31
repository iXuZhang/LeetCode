/*
两台电脑，坏的时间不同，给定每台电脑坏的时间，求一个时间段可以使用的电脑数目
*/

#include <iostream>
#include <vector>

using namespace std;


vector<vector<int>> generate(vector<pair<int,int>>& v1, vector<pair<int,int>>& v2){
	int i = 0;
	int j = 0;
	const int n1 = v1.size();
	const int n2 = v2.size();
	vector<vector<int>> res;
	while(i < n1 || j < n2){
		if(i == n1 || v2[j].second < v1[i].first){
			res.push_back({v2[j].first, v2[j].second, 1});
			j++;
		}
		else if(j == n2 || v1[i].second < v2[j].first){
			res.push_back({v1[i].first, v1[i].second, 1});
			i++;			
		}
		else{
			// [1,3] [2,5] || [1,5] [2,3]
			vector<int> index = {v1[i].first, v1[i].second, v2[j].first, v2[j].second};
			sort(index.begin(), index.end());
			res.push_back({index[0],index[1]-1, 1});
			res.push_back({index[1],index[2], 0});
			if(index[3] == v1[i].second){
				v1[i].first = index[2]+1;
				j++;
			}
			else{
				i++;
				v2[j].first = index[2]+1;
			}
		}

	}
	return res;
}

int main(){
	vector<pair<int,int>> v1 = {{1,3},{5,7},{9,10}};
	vector<pair<int,int>> v2 = {{2,6},{9,12}};
	vector<vector<int>> res = generate(v1, v2);
	for(auto v : res){
		for(int n : v)
			cout << n << " ";
		cout << endl;
	}
}