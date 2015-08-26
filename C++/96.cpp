class Solution {
public:
    // G(n) = F(1, n) + F(2, n) + ... + F(n, n). 
    // F(i, n) = G(i-1) * G(n-i)   1 <= i <= n 
    // G(n) = G(0) * G(n-1) + G(1) * G(n-2) + … + G(n-1) * G(0) 
    int numTrees(int n) {
        vector<int> res = {1};
        int k = 0;
        while(n > k++){
            int curr = 0;
            for(auto i = 0; i< res.size(); i++)
                curr += res[i]*res[res.size()-1-i]; 
            res.push_back(curr);
        }
        return res[n];
    }
};