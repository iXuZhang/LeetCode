class Solution {
public:
    vector<int> grayCode(int n) {
        vector<int> res={0};
        int m = 1;
        for(int i=0;i<n;i++){
            for(int j=res.size()-1;j>=0;j--) // error!! if auto j = res.size()-1;
                res.push_back(res[j]^m);// res[j]^m  ==  res[j]+m
            m <<= 1; //  not m<<1 !!
        }
        return res;
    }
};