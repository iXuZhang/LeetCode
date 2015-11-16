// Word Break II
class Solution {
public:
    vector<string> wordBreak(string s, unordered_set<string>& wordDict) {
        vector<string> res;
        int i = 0, n = s.size();
        for(i = n - 1; i >= 0; i--)
            if(wordDict.count(s.substr(i,n-i))) break;
        if(i == -1) return res;
        helper(s, wordDict, res, "", 0);
        return res;
    }
    
    void helper(string& s, unordered_set<string>& wordDict, vector<string>& res, string curr, int pos){
        if(pos == s.size()){
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        for(int i = pos; i < s.size(); i++){
            string temp = s.substr(pos, i - pos + 1);
            if(wordDict.count(temp)) helper(s, wordDict, res, curr + temp + " ", i + 1);
        }
    }
};