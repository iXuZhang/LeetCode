/* 
问法1
Best Time to Buy and Sell Stock
Say you have an array for which the ith element is the price of a given stock on day i.
If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.
问法2
given an array, give the maximum difference between two numbers, where larger number is on the right side of the smaller number. 
*/

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int>& prices){
	if(prices.empty()) return 0;
	int res = 0;
	int min = INT_MAX;
	for(int p : prices){
		if(p < min) min = p;
		else res = max(res, p - min);
	}
	return res;
}

int main(){
	vector<int> prices = { 5, 3, 2 ,5, 10, 1, 8};
	cout << maxProfit(prices) << endl;
	return 0;
}
