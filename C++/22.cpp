class Solution {
public:
/* Version 1 0ms
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        string curr;
        backTracking(0,0,curr,res,n);
        return res;
    }
    
    int backTracking(int m, int index, string& curr, vector<string>& res, const int n){
        if(m == n) res.push_back(curr);
        else{
            for(int i=index;i<curr.size()+1;i++){
                curr.insert(i,"()");
                backTracking(m+1,i+1,curr,res,n);
                curr.erase(i,2);
            }
        }
    }
*/
// Version 2 Easy to understand 3ms
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        helper(res,"", n, 0);
        return res;
    }
    void helper(vector<string>& res, string curr, int left, int right)
    {
        if(left == 0 && right == 0)
        {
            res.push_back(curr);
            return;
        }
        if(left > 0)
            helper(res,curr + "(", left-1, right+1);
        if(right > 0)
            helper(res,curr + ")", left, right - 1);
    }
};