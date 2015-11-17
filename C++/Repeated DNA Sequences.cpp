// Repeated DNA Sequences
class Solution {
public:
    // A65 C67 G71 T84 
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> res;
        unordered_map<int,int> table;
        const int n = s.size();
        int curr = 0;
        for(int i = 0; i < n; i++){
            curr <<= 3;
            curr |= (s[i]&7);
            curr &= 0x3FFFFFFF;
            if(i >= 9 && ++table[curr] == 2) res.push_back(s.substr(i-9,10));
        }
        return res;
    }
};