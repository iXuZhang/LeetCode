// Implement strStr()
class Solution {
public:
    int strStr(string haystack, string needle) {
        const int n = needle.size();
        const int m = haystack.size() - n;
        for(int i = 0; i <= m; i++){
            if(haystack.substr(i,n) == needle) return i;
        }
        return -1;
    }
};