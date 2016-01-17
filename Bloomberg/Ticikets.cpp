 /*
 卖车票，n个车票窗口，每个窗口里有a_i张票，票价和窗口内剩的票数一样。需要卖掉m张票。问卖m张票得到的最多的总钱数（max profit）
 */

#include <iostream>
#include <queue>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices, int m){
	if(prices.empty() || m == 0) return 0;
	priority_queue<int> table;
	for(int p: prices) table.push(p);
	int res = 0;
	for(int i = 0; i < m; i++){
		if(table.empty()) break;
		int curr = table.top();
		table.pop();
		if(curr > 1) table.push(curr-1);
		res += curr;
	}
	return res;
}

int main(){
 	vector<int> prices = {1,3,2};
 	cout << maxProfit(prices, 7) << endl;
 	return 0;
}