/*
reverse a integer
*/

#include <iostream>
#include <stdexcept>

using namespace std;

int reverseInt(long input){
	long res = 0;
	int sign = 1;
	if(input < 0){
		input = -input;
		sign = -1;
	}
	while(input > 0){
		res = res*10 + input%10;
		input /= 10;
	}
	res *= sign;
	if(res > INT_MAX || res < INT_MIN) throw overflow_error("Overflow");
	return res;
}


int main(){
	cout<< INT_MAX << endl;
	try{
		cout<< reverseInt(INT_MAX) << endl;
	} 
	catch(const overflow_error & e){
		cout<< e.what() << endl;
		return 0;
	}
	return 0;
}