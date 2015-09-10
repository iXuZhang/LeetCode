class Solution {
public:
    // backTracking will case time limit exceeded
    // "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabab", ["a","aa","ba"]
    // DP Solution,
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        int length = 0;
        vector<bool> table(s.size()+1, false);
        table[0] = true;
        for(int i = 0; i < s.size(); i++)
            for(int j = i; j >= 0; j--)
                if(table[j]) // check this pos
                    if (wordDict.find(s.substr(j,i-j+1)) != wordDict.end()){
                        table[i+1] = true; // next pos is true to check
                        break;
                    }
        return table.back();
    }
};