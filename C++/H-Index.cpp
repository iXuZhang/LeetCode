// H-Index
class Solution {
public:
    // h can be 0 - n;
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int table[n+1] = {0};
        for(int i : citations){
            if(i >= n) table[n]++;
            else table[i]++;
        }
        for(int i = n, curr = 0; i >= 0; i--){
            curr += table[i];
            if(curr >= i) return i;
        }
    }
};