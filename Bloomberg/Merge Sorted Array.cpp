/*
merge sorted array(A, size_a, B, size_b)
A has enough capacity of size_a + size_b;
*/

#include <vector>
#include <iostream>

using namespace std;

void merge2SortedArray(vector<int>& s1, int m, vector<int>& s2, int n){
	int i = m - 1;
	int j = n - 1;
	int k = m + n - 1;
	while(j >= 0){
		if(i >= 0 && s1[i] > s2[j]) s1[k--] = s1[i--];
		else s1[k--] = s2[j--];
	}
}

int main(){
	vector<int>s1 = {1,2,3,4,0,0,0};
	vector<int>s2 = {4,5,7};
	merge2SortedArray(s1,4,s2,3);
	for(int i : s1)
		cout << i << " ";
}