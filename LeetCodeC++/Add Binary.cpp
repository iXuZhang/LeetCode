// Add Binary
class Solution {
public:
    string addBinary(string a, string b) {
        if(a.size() < b.size()) return addBinary(b,a);
        b = string(a.size() - b.size(),'0') + b;
        string res;
        bool carry = false;
        for(int n = a.size() - 1; n >= 0; n--){
            res = (!carry && a[n] == '0' && b[n] == '0' || carry && a[n] == '0' && b[n] == '1' || carry && a[n] == '1' && b[n] == '0' || !carry && a[n] == '1' && b[n] == '1') ? '0' + res : '1' + res;
            carry = (a[n] == '1' && b[n] == '1' || carry && a[n] == '1' || carry && b[n] == '1') ? true : false;
        }
        if(carry) res = '1' + res;
        return res;
    }
};