class Solution {
public:
    string numberToWords(int num) {
        if(num == 0) return "Zero";
        vector<string>table = {"", " One", " Two", " Three", " Four", " Five", " Six", " Seven", " Eight", " Nine", " Ten", " Eleven", " Twelve", " Thirteen", " Fourteen", " Fifteen", " Sixteen", " Seventeen", " Eighteen", " Nineteen", "", "", " Twenty", " Thirty", " Forty", " Fifty", " Sixty", " Seventy", " Eighty", " Ninety", "", " Thousand", " Million", " Billion"};
        string res;
        int k = 0;
        while(num){
            string temp;
            int curr = num%1000;
            if(curr/100 > 0) temp += table[curr/100] + " Hundred";
            curr %= 100;
            if(curr >= 20) temp += table[20 + curr/10] + table[curr%10];
            else if(curr > 0) temp += table[curr];
            if(temp != "") res = temp + table[30 + k] + res;
            k++;
            num /= 1000;
        }
        res.erase(0,1);
        return res;
    }
};