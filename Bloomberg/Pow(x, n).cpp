/*
Pow(x, n)
*/
#include <iostream>

using namespace std;

double myPow(double x, int n){
	if(x == 0) return 0;
	if(n == 0) return 1;
	if(n == 1) return x;
	if(n < 0){
		x = 1/x;
		n = -n;
	}
	double y = myPow(x, n/2);
	return (n&1) ? y*y*x : y*y;
}


int main(){
	cout << myPow(-2,-3) << endl;
	return 0;
}