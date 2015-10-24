// Longest Palindromic Substring
class Solution {
public:
    string longestPalindrome(string s) {
        int begin = 0;
        int len = 0;
        const int n = s.size();
        for(int i = 0, j = 0; i < n; i = j + 1){
            j = i;
            while(j + 1 < n && s[j] == s[j+1]) j++;
            int left = i;
            int right = j;
            while(left >= 0 && right < n && s[left] == s[right]){
                left--;
                right++;
            }
            if(right - left - 1 > len) {
                len = right - left - 1;
                begin = left + 1;
            }
        }
        return s.substr(begin,len);
    }
};