// Generate Parentheses
class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
        backTracking(0,n, "",res);
        return res;
    }
    
    void backTracking(int rightNeed, int leftNum, string curr, vector<string>& res){
        if(leftNum == 0 && rightNeed == 0){
            res.push_back(curr);
            return;
        }
        if(rightNeed > 0) backTracking(rightNeed-1, leftNum, curr + ")", res);
        if(leftNum > 0) backTracking(rightNeed+1, leftNum-1, curr + "(", res);
    }
};