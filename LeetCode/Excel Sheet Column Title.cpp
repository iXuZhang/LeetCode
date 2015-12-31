// Excel Sheet Column Title
class Solution {
public:
    // period = 26
    // 1 -> A
    // 26 -> Z
    // 27 -> AA
    string convertToTitle(int n) {
        string res;
        while(n){
            res = char('A' + (n-1)%26) + res;
            n = (n-1)/26;
        }
        return res;
    }
};