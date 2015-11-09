// Fraction to Recurring Decimal
class Solution {
public:
    string fractionToDecimal(int numerator, int denominator) {
        long num = numerator;
        long den = denominator;
        string res;
        if(num * den < 0) res += "-";
        if(num < 0) num = -num;
        if(den < 0) den = -den;
        res += to_string(num/den); //-2147483648 -1
        long rem = num % den;
        if(rem == 0) return res;
        unordered_map<int,int> table;
        res += ".";
        int i = res.size();
        while(rem != 0 && table.count(rem) == 0){
            table[rem] = i++;
            res += to_string(rem*10/den);
            rem = rem*10%den;
        }
        if(rem != 0){
            res.insert(table[rem], "(");
            res +=  ")";
        }
        return res;
    }
};