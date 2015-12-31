/*
double power(int m,int n)
1. n < 0
2. overflow 比如某一次跑完后, 判断 half 是否在INT_MAX范围内
throw std::overflow_error("Output of power overflow")

try{

}
catch (const overflow_error& e){
    cerr << e.what() << endl;
}

迭代跟递归两个方面实现，
问了时间，空间复杂度

bool, char  1 byte  = 8 bit
int         4 byte  = 32 bit
double      8 byte  = 64 bit
*/

#include <iostream>
#include <float.h>
using namespace std;


double power(int x, int n) {
    if(n < 0){
        n = -n;
        x = 1/x;
    }
    if(n == 0) return 1;
    if(n == 1) return x;
    double half = power(x, n/2);
    double res = (n&1) ? half*half*x : half*half;
    if(res > INT_MAX || res < INT_MIN) throw std::overflow_error("power Overflow");
    return res;
}

int main(){
    cout << INT_MAX << endl;
    cout << INT_MIN << endl;
    cout << LONG_MAX << endl;
    cout << DBL_MAX << endl;

    try{
    cout << power(-2,9) << endl;
    }
    catch(const overflow_error& e){
        cerr << e.what() << endl;
    }

}