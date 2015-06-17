class Solution {
public:
/* Version 1
    string intToRoman(int num) {
        string res;
        while(num-1000>=0){
            res += "M";
            num -= 1000;
        }
        if(num >= 900){
            res += "CM";
            num -= 900;
        }
        while(num-500>=0){
            res += "D";
            num -= 500;
        }
        if(num >= 400){
            res += "CD";
            num -= 400;
        }
        while(num-100>=0){
            res += "C";
            num -= 100;
        }
        if(num >= 90){
            res += "XC";
            num -= 90;
        }
        while(num-50>=0){
            res += "L";
            num -= 50;
        }
        if(num >= 40){
            res += "XL";
            num -= 40;
        }
        while(num-10>=0){
            res += "X";
            num -= 10;
        }
        if(num >= 9){
            res += "IX";
            num -= 9;
        }
        while(num-5>=0){
            res += "V";
            num -= 5;
        }        
        if(num >= 4){
            res += "IV";
            num -= 4;
        }
        while(num-1>=0){
            res += "I";
            num -= 1;
        }
        return res;
    }
*/
// Version 2 Awesome!
    string intToRoman(int num) {
        string M[] = {"", "M", "MM", "MMM"};
        string C[] = {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"};
        string X[] = {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"};
        string I[] = {"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"};
        return M[num/1000] + C[(num%1000)/100] + X[(num%100)/10] + I[num%10];
    }
};