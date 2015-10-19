// Length of Last Word
class Solution {
public:
    // index: 2345678
    // len: 3->8 = 8-3+1 or 8-2 or 9-3
    int lengthOfLastWord(string s) {
        if(s.empty()) return 0;
        int i = s.size() - 1;
        while(s[i] == ' ' && i >= 0) i--; // "ab " -> 2
        int n = i;
        while(s[i] != ' ' && i >= 0) i--;
        return n - i;
    }
};