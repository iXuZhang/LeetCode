#include <iostream>
#include <set>
#include <string>
#include <vector>
#include <math.h>
#include <numeric>
#include <algorithm>

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
          
    int res = (5>2?1:2) + 5>2?3:4;
    cout<<res<<endl;
    return 0;    
}
