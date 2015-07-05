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

    
    string backTracking(string& res, string& curr, int m, int& n, int& k){
        if(m==n)
            if(--k==0){
                res = curr;
                n = 0;
            }
        for(int i=m; i<n; i++){
            swap(curr[m],curr[i]);
            backTracking(res,curr,m+1,n,k);
            swap(curr[m],curr[i]);
        }
    }

int main(){
    int n=0,k=0;
    string res, curr;
    for(int i=1;i<=n;i++) curr.push_back(char(i+'0'));
    backTracking(res, curr, 0, n, k);
    cout<<res<<endl;
    return 0;    
}
