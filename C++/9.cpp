class Solution {
public:
    /* Version 1 to_string
     bool isPalindrome(int x) {
     string s = to_string(x);
     int n = s.size();
     for(int i = 0;i<n/2;i++) if(s[i]!=s[n-1-i]) return false;
     return true;
     }
     */
    /* Version 2 reverse
     bool isPalindrome(int x) {
     if(x<0) return false;
     int y = x, z = 0;
     while(x){
     z = z*10 + x%10;
     x /= 10;
     }
     return y == z;
     }
     */
    // Version 3 reverse half
    bool isPalindrome(int x) {
        if(x<0 || x!=0 &&x%10==0) return false; // 10,100
        int y = 0;
        while(x>y){
            y = y*10 + x%10;
            x /= 10;
        }
        return x == y || x == y/10;
    }
    
};