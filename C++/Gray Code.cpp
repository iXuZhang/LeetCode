// Gray Code
class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res = {0};
        if(n == 0) return res;
        int factor = 1;
        while(n--){
            res.insert(res.end(),res.rbegin(),res.rend());
            for(int i = res.size()/2; i < res.size(); i++)
                res[i] += factor;
            factor <<= 1;
        }
        return res;
    }
};