#include <iostream>
#include <string>
#include <vector>

using namespace std;


enum INPUT {X, Y, Z}; 

void backTracking(vector<string>& res, vector<string>& nums, string& curr, int pos){
	if(pos==3) res.push_back(curr+")");
	for(int i=0;i<nums[pos].size();i++){
		curr.push_back(nums[pos][i]);
		backTracking(res,nums,curr,pos+1);
		curr.pop_back();
	}
}

vector<string> test(int M=0, int para1=-1, int para2=-1, int para3=-1 ){
    string input = "XYZ";
    vector<string> res, nums;
    para1==-1 ? nums.push_back(input):nums.push_back(input.substr(para1,1));
    para2==-1 ? nums.push_back(input):nums.push_back(input.substr(para2,1));
    para3==-1 ? nums.push_back(input):nums.push_back(input.substr(para3,1));
    string curr = "func(";
    backTracking(res,nums,curr,0);
    if(!M) return res;
    curr = res[M-1];
    return {curr};
}

int main(){
    int n = 3;
    vector<int> result = { 0,1,2 };
    int t = 1;
    //for(int i = 0; i<n; i++) {
    auto k = result.rend();
        for(auto j = result.rbegin(); j != k; j++){
            result.push_back(10);
            cout<<*j<<endl;
        }
        t <<= 1;
    //}
    return 0;
}
