class Solution {
public:
    /* Version 1 Iteration 4ms
    vector<int> plusOne(vector<int>& digits) {
        for(auto iter = digits.rbegin(); iter != digits.rend(); ++iter){
            if(*iter != 9){
                *iter = *iter + 1;
                break;
            }
            else if(*iter == 9 && iter != digits.rend()-1) *iter = 0;
            else{
                *iter = 0;
                digits.insert(digits.begin(),1);
                return digits;
            }
        }
        return digits;
    }
    */
    // Version 2 Recursion 4ms
     vector<int> plusOne(vector<int>& digits) {
         if(digits.back()!=9){
            digits.back() += 1;
            return digits;
         }    
         else if(digits.size()>1 && digits.back()==9){
            digits.pop_back();
            vector<int> res = plusOne(digits);
            res.push_back(0);
            return res;
         }    
         else return {1,0};
     }     
};