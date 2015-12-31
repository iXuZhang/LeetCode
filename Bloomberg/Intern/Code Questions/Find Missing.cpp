/*
若有两个missing, 0 - n
*/

#include <iostream>
#include <vector>

using namespace std;

// time O(n), spaceO(1), or use a vector<bool>
void findMissing(vector<int>& input){
	int res = 0;
	for(int i = 0; i < input.size(); i++){
		res ^= i;
		res ^= input[i];
	}
	int num1 = 0;
	int num2 = 0;
	int mask = res&(-res);
	//  00001010 1 byte
	//  11110101 ones' complement
	// 	11110110 twos' complement
	for(int i = 0; i < input.size(); i++){
		if(i ^ mask) num1 ^= i;
		else num2 ^= i;
		if(input[i] ^ mask) num1 ^= input[i];
		else num2 ^= input[i];
	}
	cout << num1 << endl;
	cout << num2 << endl;
}

int main(){
	vector<int> input = {0,4,2,6,1};
	findMissing(input);
	return 0;
}