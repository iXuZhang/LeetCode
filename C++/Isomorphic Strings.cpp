// Isomorphic Strings
class Solution {
public:
    // char max 256, do not need a map
    // map letter and last index + 1
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> tableS(256, 0);
        vector<int> tableT(256, 0);
        const int n = s.size();
        for(int i = 0; i < n; i++){
            if(tableS[s[i]] != tableT[t[i]]) return false;
            tableS[s[i]] = tableT[t[i]] = i+1;
        }
        return true;
    }
};