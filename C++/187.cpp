class Solution {
public:
    // Awesome!! Bit Manipulation!!
    // A is 0x41, C is 0x43, G is 0x47, T is 0x54.
    // A is 0101, C is 0103, G is 0107, T is 0124
    // 7 = 0111 s[i] & 7 last three digits 
    // 0x3FFFFFFF 30bit 1
    // turn string into int using bit manipulation
    vector<string> findRepeatedDnaSequences(string s) {
        vector<string> r;
        unordered_map<int,int> m;
        for (int t = 0, i = 0; i < s.size(); i++)
        if (m[t = t << 3 & 0x3FFFFFFF | s[i] & 7]++ == 1) // Awesome!!
            r.push_back(s.substr(i - 9, 10));
        return r;
    }
};