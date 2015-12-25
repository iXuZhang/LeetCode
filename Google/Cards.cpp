/*
Q1: Assume you have a deck of cards. Each card has a number on it with no suit. We define “X of a kind” as X cards with same number on it (X >= 2). Determine if the deck can be fully divided into sets of “X of a kind”.
Example: 3, 5, 3, 5, 3 -> True
3, 3, 5, 3, 3 -> False
*/

/*
Q2: Define “Straight” as 5 cards with consecutive numbers. Determine if the deck can be fully divided into sets of “Straight”.
Example: 1, 2, 3, 4, 4, 5, 5, 6, 7, 8 -> True
*/

/*
Q3: Define “X-Straight” as X cards with consecutive numbers (X >= 3). Determine if the deck can be fully divided into sets of “X-Straight”.
Example: 1, 2, 3, 4, 4, 5, 6 -> True
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool isX(vector<int>& input){
	unordered_map<int,int> table;
	for(int n : input){
		table[n]++;
	}
	for(auto i = table.begin(); i != table.end(); ++i)
		if(i->second < 2) return false;
	return true;
}

bool is5Straight(vector<int>& input){
	sort(input.begin(),input.end());
	unordered_map<int,int> table;
	for(int n : input){
		table[n]++;
	}
	for(int n: input){
		if(table[n] > 0){
			for(int i = n; i <= n+ 4; i++){
				if(table.count(i) == 0 || table[i] == 0) return false;
				else table[i]--;
			}
		}
	}
	return true;
}


bool backTracking(vector<int>& input, unordered_map<int,int>& table, int pos){
	if(pos == input.size()) return true;
	int n = input[pos];
	if(table[n] == 0) return backTracking(input, table, pos+1);
	for(int k = 3; k <= input.size(); k++){
		bool isOK = true;
		for(int i = n; i <= n+k-1;i++){
			if(table[i] == 0) isOK = false;
			table[i]--;
		}
		if(isOK && backTracking(input, table, pos+1)) return true;
		for(int i = n; i <= n+k-1;i++) table[i]++;
	}
	return false;
}

bool isXStraight(vector<int>& input){
	sort(input.begin(),input.end());
	unordered_map<int,int> table;
	for(int n : input){
		table[n]++;
	}
	return backTracking(input, table, 0);
}

int main(){
	vector<int> input = {1, 2, 3, 4, 3,4,5,6,2,3,4,};
	cout << isX(input)<<endl;
	cout << is5Straight(input)<<endl;
	cout << isXStraight(input)<<endl;
	return 0;
}


