/*
Two sum
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// result do not have duplicate
// 如果是[2 2 5 5]这种有重复的，和为7，要输出1次
vector<pair<int,int>> twoSum1(vector<int>& input, int target){
	vector<pair<int,int>> res;
	unordered_map<int,int> table;
	for(int num : input) table[num]++;
	for(auto i = table.begin(); i != table.end(); ++i){
		if(i->first <= target/2 && table.count(target - i->first) > 0){
			if(target - i->first != i->first) res.push_back(make_pair(i->first, target-i->first));
			if(target - i->first == i->first && i->second > 1) res.push_back(make_pair(i->first,i->first));
		}
	}
	return res;
}

int factorial(int x){
	if (x == 0 || x == 1) return 1;
	return x*factorial(x-1);
}

// Result have dulicate
// 如果是[2 2 5 5]这种有重复的，和为7，要输出4次
// [5 5 5 5],和为10, 要输出（4-1)！= 6次
vector<pair<int,int>> twoSum2(vector<int>& input, int target){
	vector<pair<int,int>> res;
	unordered_map<int,int> table;
	for(int num : input) table[num]++;
	for(auto i = table.begin(); i != table.end(); ++i){
		if(i->first <= target/2 && table.count(target - i->first) > 0){
			if(target - i->first != i->first){
				int count = table[target - i->first]*table[i->first];
				while(count--)res.push_back(make_pair(i->first, target-i->first));
			}
			if(target - i->first == i->first && i->second > 1){
				int count = factorial(table[i->first]-1);
				while(count--) res.push_back(make_pair(i->first,i->first));
			} 
		}
	}	
	return res;
}


// Sort + two pointer
vector<pair<int,int>> twoSum3(vector<int>& input, int target){
	vector<pair<int,int>> res;
	sort(input.begin(), input.end());
    int left = 0;
    int right = input.size() - 1;
    while(left < right){
    	if(input[left] + input[right] == target){
    		res.push_back(make_pair(input[left],input[right]));
    		while(left + 1 < right && input[left] == input[left+1]) left++;
    		left++;
    	} 
    	else if(input[left] + input[right] < target) left++;
    	else right--;
    }
	return res;
}

int main(){
	vector<int> input = {2, 2, 5, 5};
	vector<int> input2 = {5, 5, 5, 5};
	vector<pair<int,int>> res = twoSum3(input, 7);
	for(auto p : res)
		cout << p.first <<" "<< p.second<<endl;
	return 0;
}
