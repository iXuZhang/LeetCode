class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> res;
        vector<int> curr;
        backTracking(res,curr,1,n,k);
        return res;
    }
    
    void backTracking(vector<vector<int>>& res, vector<int>& curr,int i, int n, int k){
        if(k==0) res.push_back(curr);
        else{
            for(;i<=n;i++){
                curr.push_back(i);
                backTracking(res,curr,i+1,n,k-1);
                curr.pop_back();
            }
        }
    }
};