class Solution {
public:
    string addBinary(string a, string b) {
        string res;
        int carry = 0 ,i = a.size() -1, j = b.size() -1;
        while (i >= 0 || j >= 0 || carry==1){
            int temp = (i>=0 ? a[i--]-'0':0) + (j >=0 ? b[j--]-'0':0)+ carry;
            if(temp > 1){
                res = char(temp-2+'0') + res; // if to_string() 8ms   char() 4ms
                carry = 1;
            } 
            else{
                res = char(temp+'0') + res;
                carry = 0;
            } 
        }
        return res;
    }
};