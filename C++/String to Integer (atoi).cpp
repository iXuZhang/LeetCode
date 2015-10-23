// String to Integer (atoi)
class Solution {
public:
    int myAtoi(string str) {
        long res = 0;
        int sign = 1;
        int i = 0;
        while(str[i] == ' ') i++;
        if(str[i] == '+') i++;
        else if(str[i] == '-'){
            i++;
            sign = -1;
        }
        for(; i < str.size() && res <= INT_MAX; i++){
            if(str[i] >= '0' && str[i] <= '9')
                res = res*10 + str[i] - '0';
            else break;
        }
        res = sign*res;
        if(res >= INT_MAX) res = INT_MAX;
        if(res <= INT_MIN) res = INT_MIN;
        return res;
    }
};