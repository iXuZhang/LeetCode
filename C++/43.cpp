class Solution {
public:
    // use index not iterator,iterator can not map to another vector.
    string multiply(string num1, string num2) {
        if(num1 == "0"||num2 == "0") return "0";
        string res;
        vector<int> product(num1.size()+num2.size(),0); 
        reverse(num1.begin(), num1.end());
        reverse(num2.begin(), num2.end());
        for(int i=0; i!= num1.size(); i++){
            for(int j=0; j!=num2.size(); j++){
                product[i+j] += (num1[i]-'0')*(num2[j]-'0');
                product[i+j+1] += product[i+j]/10;
                product[i+j] %= 10;
            }
        }
        auto k=product.rbegin();
        if(!*k) ++k; 
        for(;k!=product.rend();++k) res += to_string(*k);
        return res;
    }
};
