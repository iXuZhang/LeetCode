//Fraction to Recurring Decimal
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        if(!numerator) return "0";
        if(!denominator) throw invalid_argument("denominator can not be 0");
        string res;
        if(numerator > 0 ^ denominator > 0) res += '-';
        long x = labs(numerator);
        long y = labs(denominator);
        res += to_string(x/y);
        if(x%y == 0) return res;
        res += '.';
        unordered_map<int,int> table;
        long r = x%y;
        while(r != 0){
            if(table.count(r) > 0){
                res.insert(res.begin() + table[r],'(');
                res += ')';
                return res;
            }
            table[r] = res.size();
            res += to_string(10*r/y);
            r = 10*r%y;
        }
        return res;
    }
};