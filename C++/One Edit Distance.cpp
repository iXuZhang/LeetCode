// One Edit Distance
class Solution {
public:
    bool isOneEditDistance(string s, string t) {
        if(s.size() < t.size()) return isOneEditDistance(t, s);
        for(int i = 0 ;i < t.size();i++)
            if(s[i] != t[i]) return s.substr(i+1) == t.substr(i) || s.substr(i+1) == t.substr(i+1);
        return s.size() - t.size() == 1; 
    }
};