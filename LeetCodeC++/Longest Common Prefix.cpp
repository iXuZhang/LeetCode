// Longest Common Prefix
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prifix;
        if(strs.empty()) return prifix;
        const int n = strs[0].size();;
        for(int i = 0; i < n; i++){
            char curr = strs[0][i];
            for(int j = 0; j <strs.size(); j++){
                if(strs[j].size() < i + 1 || strs[j][i] != curr) return prifix;
            }
            prifix += curr;
        }
        return prifix;
    }
};