// Shortest Palindrome
class Solution {
public:
    // 4ms O(n2)
    string shortestPalindrome(string s) {
        const int n = s.size();
        int len = 0;
        for(int i = 0, j; i <= n/2; i = j + 1){
            j = i;
            while(j + 1 < n && s[j] == s[j + 1]) j++;
            int left = i;
            int right = j;
            while(right < n && left >= 0 && s[left] == s[right]){
                left--;
                right++;
            }
            if(left + 1 == 0) len = max(len, right - left - 1);
        }
        string s2 = s.substr(len);
        reverse(s2.begin(), s2.end());
        return s2 + s;
    }
    
    /* use a reversed string
    string shortestPalindrome(string s) {
        const int n = s.size();
        string s2 = s;
        reverse(s2.begin(), s2.end());
        int i = 0;
        int j = n;
        while(s.substr(0,j) != s2.substr(i)){
            i++;
            j--;
        }
        return s2.substr(0,i) + s;
    }
    */
};