class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(numerator == 0) return "0";
        string res;
        if(numerator > 0 ^ denominator > 0) res += '-'; // Awesome! 
        long n = labs(numerator);
        long d = labs(denominator);// -2147483648 , labs
        res += to_string(n/d);
        if(n % d == 0) return res;
        res += ".";
        unordered_map<long,int> map;
        for(long r = n % d; r > 0; r %= d){
            if(map.count(r) > 0){ // count vs find !!
                res.insert(map[r],"(");
                res += ")";
                return res;
            }
            map[r] = res.size();//important!! pos to insert;
            r *= 10;
            res += to_string(r/d);
        }
        return res;
    }
};