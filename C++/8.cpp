class Solution {
public:
// Version 1
    int myAtoi(string str) {
        long res = 0;
        int i = 0;
        bool neg = false;
        while(i<str.size() && str[i] == ' ' ) i++;
        if(str[i]=='+' ) i++;
        else if(str[i] == '-'){
            i++;
            neg = true;
        }
        int j=i;
        while(i<str.size() && str[i] >= '0' && str[i] <= '9') i++;
        if( i-j == 0 ) return 0;
        if( i-j > 10 && neg) return INT_MIN;
        if( i-j > 10 && !neg) return INT_MAX;
        res = stol(str.substr(j,i-j));
        if(neg) res = -res;
        if(res < INT_MIN) return INT_MIN;
        if(res > INT_MAX) return INT_MAX;
        return res;
    }


/* Version2
    int myAtoi(string str) {
        long result = 0;
        int indicator = 1;
        for(int i = 0; i<str.size();)
        {
            i = str.find_first_not_of(' ');
            if(str[i] == '-' || str[i] == '+')
                indicator = (str[i++] == '-')? -1 : 1;
            while(i<str.size() && '0'<= str[i] && str[i] <= '9') 
            {
                result = result*10 + (str[i++]-'0');
                if(result*indicator >= INT_MAX) return INT_MAX;
                if(result*indicator <= INT_MIN) return INT_MIN;                
            }
            return result*indicator;
        }
    }
*/    