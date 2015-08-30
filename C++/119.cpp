class Solution {
public:
    /* Version 1
    vector<int> getRow(int rowIndex) {
        vector<int> res;
        res.push_back(1);
        while(rowIndex--){
            vector<int> temp = res;
            for(auto i=1; i<temp.size(); i++)
                res[i] = temp[i-1] + temp[i];
            res.push_back(1);
        }
        return res;
    }
    */
    
    // Version 2 
    vector<int> getRow(int rowIndex) {
        vector<int> res(rowIndex + 1, 0);
        res[0] = 1;
        for(auto i = 1; i < rowIndex + 1; i++)
            for(auto j = i; j > 0; j--) // important!!
                res[j] += res[j-1];
        return res;
    }
};