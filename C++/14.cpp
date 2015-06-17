class Solution {
public:
/* Version 1
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string common = strs[0];
        for(int i = 1;i<strs.size();i++){
            for(int j=0; j<common.size();j++) if(common[j]!=strs[i][j]) common = common.substr(0,j);
            if(common.empty()) return "";
        }
        return common;
    }
*/
// Version 2
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()) return "";
        string common;
        for(int i = 0;i<strs[0].size();i++){
            for(int j=0; j<strs.size();j++) if(strs[0][i]!=strs[j][i]) return common;
            common += strs[0][i];
        }
        return common;
    }
};