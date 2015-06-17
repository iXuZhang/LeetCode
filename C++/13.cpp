class Solution {
public:
/* Version 1
    int romanToInt(string s) {
        int res = 0;
        map<char,int> s_map;
        s_map['M'] = 1000;
        s_map['D'] = 500;
        s_map['C'] = 100;
        s_map['L'] = 50;
        s_map['X'] = 10;
        s_map['V'] = 5;
        s_map['I'] = 1;
        for(int i=0; i<s.size()-1;i++){
            if(i+1<s.size()&&s_map[s[i]]<s_map[s[i+1]]) res -= s_map[s[i]];
            else res += s_map[s[i]];
        }
        return res;
    }
*/
// Version 2
    int romanToInt(string s) {
        int res=0;
        int lastValue=0;
        int digit;
        for(int i=s.size()-1;i>=0;i--){
            switch(s[i]){
                case 'I': digit=1; break;
                case 'V': digit=5; break;
                case 'X': digit=10; break;
                case 'L': digit=50; break;
                case 'C': digit=100; break;
                case 'D': digit=500; break;
                case 'M': digit=1000; break;
            }
            if(digit>=lastValue){
                res+=digit;
                lastValue=digit;
            }
            else res-=digit;
        }
        return res;
    }
};