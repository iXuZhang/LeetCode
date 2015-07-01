#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <math.h>

using namespace std;

struct Student
{
    int num;
    char name[20];
    char sex;
    int age;
    float score;
    char addr[30];
}student1={10001, "Zhang Xin", 'M', 19, 90.5, "Shanghai"};

int main(){
		int dividend = 2147483647;
		int divisor= 1;
 		if(!divisor || (dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        bool neg = (dividend>0)^(divisor>0);
        int divid = abs(dividend);
        int divir = abs(divisor);
        int res = 0;
        while(divid >= divir){
            int temp = divir;
            int reminder = 1;
            while(divid >= (temp<<1)){
                reminder <<= 1;
                temp <<= 1;
                cout<<temp<<endl;
            }
            res += reminder;
            divid -= temp;
            cout<<res<<endl;
        }
        return 0;
}