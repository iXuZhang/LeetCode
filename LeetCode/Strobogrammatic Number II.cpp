// Strobogrammatic Number II
class Solution {
public:
    vector<string> findStrobogrammatic(int n) {
        if(n == 2) return {"11","69","88","96"};
        return helper(n,n);
    }
    
    vector<string> helper(int n , int m){
        if(m == 1) return {"0", "1", "8"};
        if(m == 2) return {"00","11","69","88","96"};
        vector<string> res;
        vector<string> temp = helper(n , m - 2);
        for(string s : temp){
            if(n != m ) res.push_back("0" + s + "0");
            res.push_back("1" + s + "1");
            res.push_back("6" + s + "9");
            res.push_back("8" + s + "8");
            res.push_back("9" + s + "6");
        }
        return res;
    }
};