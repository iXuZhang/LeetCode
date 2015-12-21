/*
print out the format of:
      *
     ***
   	*****
*/

#include <iostream>
#include <string>

using namespace std;

void printFormat(int n){
	for(int i = 0; i < n; i++){
		string s = string(n-i,' ') + string(2*i+1,'*');
		cout<< s << endl; 
	}
}

int main(){
	printFormat(3);
	return 1;
}