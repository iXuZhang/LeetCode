// Word Break II
class Solution {
public:
    vector<string> wordBreak(string s, unordered_set<string>& wordDict) {
        vector<string> res;
        for(int j = s.size() - 1; j >= 0; j--){
            if(wordDict.count(s.substr(j))) break;
            else if(j == 0) return res;
        }
        backTracking(res, s, wordDict, "", 0);
        return res;
    }
    
    void backTracking(vector<string>& res, string s, unordered_set<string>& wordDict, string curr, int pos){
        if(pos == s.size()){
            curr.pop_back();
            res.push_back(curr);
            return;
        }
        for(int i = pos; i < s.size(); i++){
            string temp = s.substr(pos, i-pos+1);
            if(wordDict.count(temp)) backTracking(res, s, wordDict, curr+temp+" ", i+1);
        }
    }
};