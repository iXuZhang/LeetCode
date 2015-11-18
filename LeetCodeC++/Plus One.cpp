// Plus One
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(auto i = digits.rbegin(); i != digits.rend(); ++i){
            if(*i < 9){
               *i += 1;
               return digits;
            } 
            else *i = 0; // easy to forget
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};