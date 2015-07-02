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

void backTracking(vector<int>::iterator i, vector<vector<int>>& res, vector<int>& current, const vector<int>& candidates, const int target){
    if(!target) res.push_back(current);
    else if(target>0)
        for(; i != candidates.end(); ++i){
            current.push_back(*i);
            cout<<*i<<endl;
            backTracking(i, res, current, candidates, target-*i);
            current.pop_back();
        }
}

int main(){
        vector<int> candidates = {2,3};
        int target = 5;
        vector<int> current;
        vector<vector<int>> res;
        sort(candidates.begin(),candidates.end());
        backTracking(candidates.begin(), res, current, candidates, target);
        return 0;    
}
