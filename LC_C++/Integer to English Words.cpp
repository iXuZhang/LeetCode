// Integer to English Words
class Solution {
public:
    string numberToWords(int num) {
        vector<string> table1={"","One ","Two ","Three ","Four ","Five ","Six ","Seven ","Eight ","Nine ","Ten ","Eleven ","Twelve ","Thirteen ","Fourteen ","Fifteen ","Sixteen ","Seventeen ","Eighteen ","Nineteen "};
        vector<string> table2={"","","Twenty ","Thirty ","Forty ","Fifty ","Sixty ","Seventy ","Eighty ","Ninety ","Hundred "};
        vector<string> table3={"","Thousand ","Million ","Billion "};
        if(!num) return "Zero";
        string res;
        for(int i = 0; num != 0; i++, num /= 1000){
            string curr;
            int temp = num%1000;
            if(temp/100) curr += table1[temp/100] + "Hundred ";
            temp %= 100;
            if(temp < 20) curr += table1[temp];
            else curr += table2[temp/10] + table1[temp%10];
            if(!curr.empty()){
               curr += table3[i]; // 1 000 000
               res = curr + res;
            }
        }
        res.pop_back();
        return res;
    }
};