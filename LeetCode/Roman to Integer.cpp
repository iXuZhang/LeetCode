// Roman to Integer
class Solution {
public:
    // scan only once
    int romanToInt(string s) {
        int res = 0;
        for(int i = s.size() - 1; i >= 0; i--){
            if(s[i] == 'I') res += res < 5 ? 1 : -1;
            else if(s[i] == 'V') res += 5;
            else if(s[i] == 'X') res += res < 50 ? 10 : -10;
            else if(s[i] == 'L') res += 50;
            else if(s[i] == 'C') res += res < 500 ? 100 : -100;
            else if(s[i] == 'D') res += 500;
            else res += 1000;;
        }
        return res;
    }
};