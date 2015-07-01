class Solution {
public:
    /* Version 1 substr() 36ms
    int strStr(string haystack, string needle) {
        int length = needle.size();
        if(!length) return 0;
        for(int i=0;i<haystack.size();i++){
            if(haystack.substr(i,length)==needle) return i;
        }
        return -1;
    }
    */
    /* Version 2 find 4ms
    int strStr(string haystack, string needle) {
        return haystack.find(needle);
    }
    */
    // Version 3 two pointers
    int strStr(string haystack, string needle) {
        int m = haystack.size();
        int n = needle.size();
        for(int i=0;i<m-n+1;i++){ //i<m-n+1 
            int j=0;
            for(;j<n;j++)
                if(haystack[i+j]!=needle[j]) break;
            if(j==n) return i;
        }
        return -1;
    }
};