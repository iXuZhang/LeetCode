#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

int getKth(const vector<int>& nums1, int begin1, const vector<int>& nums2, int begin2, int k, int m, int n){
    if (begin2 == n ) 
        return nums1[begin1 + k - 1];
    if (begin1 == m )
        return nums2[begin2 + k - 1];
    if (k == 1)
        return min(nums1[begin1], nums2[begin2]);
    if(k>10) return 0;
    int i = min(m, begin1 + k / 2); 
    int j = min(n, begin2 + k / 2);
        cout<<"k = "<<k <<endl;
        cout<<"i = "<<i<<endl;
        cout<<"j = "<<j<<endl;
        cout<<"begin1 = "<<begin1<<endl;
        cout<<"begin2 = "<<begin2<<endl;
    if (nums1[i - 1 ] > nums2[j - 1])
        return getKth(nums1, begin1, nums2, begin2 + j, k - j + begin2, m, n);
    else
        return getKth(nums1, begin1 + i, nums2, begin2, k - i + begin1, m, n);
    return 0;
}
double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        int left = (m + n + 1) >> 1;
        int right = (m + n + 2) >> 1;
        return (getKth(nums1, 0, nums2, 0, left,m,n) + getKth(nums1, 0, nums2, 0, right,m,n))/2.0;
}

void backTracking(int num, int pos, vector<int>& table, int curr, vector<string>& res){
    if(num == 0){
       string temp = to_string(curr/100) + ":";
       if(curr%100 > 9) temp += to_string(curr%100);
       else temp += "0" + to_string(curr%100);
       res.push_back(temp);
       return; 
    } 
    for(int i = pos; i < table.size(); i++)
    backTracking(num-1, i+1, table, curr + table[i], res);
}

int main(){
 
    return 0;
}


