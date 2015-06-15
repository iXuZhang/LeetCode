class Solution {
public:
/* Version 1
    string longestPalindrome(string s) {
        string res = s.substr(0,1);
        int length = 1;
        int m = s.size();
        for(int i = 0; i< m; i++){
            if(s[i] == s[i+1]){
                int k = 0;
                while(i+1+k < m && i-k >= 0 && s[i-k]==s[i+1+k]) k++;
                if(2*k > length) {
                    res = s.substr(i-k+1,2*k);
                    length = 2*k;
                }
            }
            if( s[i-1] == s[i+1]){
                int k = 0;
                while(i+1+k <= m && i-1-k >= 0 && s[i-1-k]==s[i+1+k]) k++;
                if(2*k+1 > length){
                    res = s.substr(i-k,2*k+1);
                    length = 2*k+1;
                } 
            }
        }
        return res;
    }
*/ 

// Version2 Awesome! Very fast
    string longestPalindrome(string s) {
        int m = s.size();
        if (m == 0) return "";
        if (m == 1) return s;
        int min_start = 0, max_len = 1;
        for (int i = 0; i < m;) {
          if (m - i <= max_len / 2) break;//break
          int j = i, k = i;
          while (k < m-1 && s[k+1] == s[k]) ++k; // Skip duplicate characters.
          i = k+1;
          while (k < m-1 && j > 0 && s[k + 1] == s[j - 1]) { ++k; --j; } // Expand.
          int new_len = k - j + 1;
          if (new_len > max_len) { min_start = j; max_len = new_len; }
        }
        return s.substr(min_start, max_len);
    }
};