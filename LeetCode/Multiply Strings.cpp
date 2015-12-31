// Multiply Strings
class Solution {
public:
    /*
    213
     43
    639
   852
    */
    string multiply(string num1, string num2) {
        const int m = num1.size();
        const int n = num2.size();
        string res(m + n + 1, '0'); // important idea!!!
        for(int i = num1.size() - 1; i >= 0; i--)
            for(int j = num2.size() - 1; j >= 0; j--){
                int temp = res[i+j+2] - '0' + (num1[i] - '0')*(num2[j] - '0');
                res[i+j+2] = '0' + temp%10;
                res[i+j+1] += temp/10;
            }
        size_t begin = res.find_first_not_of('0');
        if(begin == string::npos) return "0";
        return res.substr(begin);
    }
};