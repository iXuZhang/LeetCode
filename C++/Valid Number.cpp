// Valid Number
class Solution {
public:
    bool isNumber(string s) {
        if(s.empty()) return false;
        int i = 0, n = s.size();
        while(i < n && s[i] == ' ') i++;
        while(n - 1 >= 0 && s[n-1] == ' ') n--;
        if(s[i] == '-' || s[i] == '+' ) i++;
        if(s[i] == 'e') return false;
        bool hasDot = false;
        bool hasE = false;
        bool hasDigit = false;
        for(; i < n; i++){
            if(s[i] >= '0' && s[i] <= '9') hasDigit = true;
            else if(s[i] == '.' && hasDot) return false;
            else if(s[i] == '.') hasDot = true;
            else if(s[i] == 'e' && (hasE || !hasDigit)) return false;
            else if(s[i] == 'e'){
               hasE = hasDot = true;
               if(i + 1 < n && s[i+1] == '+') i++;
               else if(i + 1 < n && s[i+1] == '-') i++;
               else if(i + 1 < n && s[i+1] == '.') return false;
               if(i + 1 == n) return false;
            } 
            else return false;
        }
        return hasDigit;
    }
};