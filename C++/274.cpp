class Solution {
public:
    // Version 1
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int res = 0;
        int n = citations.size();
        for(int i = n -1 ; i >= 0; i--)
            if(citations[i] >= n - i ) res = n - i;
            else return res;
        return res;
    }
};