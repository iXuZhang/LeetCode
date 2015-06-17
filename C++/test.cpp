#include <iostream>
#include <set>
#include <string>
#include <math.h>

using namespace std;

int main(){
	string str = "9223372036854775809";
        long long res = 0;
        int i = 0;
        while(i<str.size() && str[i] == ' ' ) i++;
        if(i == str.size() || !(str[i] >= '0' && str[i] <= '9'))return 0;
        int j = i;
        while(i<str.size() && str[i] >= '0' && str[i] <= '9') i++;
        res = stol(str.substr(j,i-j));
        
        res >= INT_MIN && res <= INT_MAX ? 1 : res = 0;
        cout << res << endl;
        return 0;
}