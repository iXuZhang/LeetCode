// Ugly Number II
class Solution {
public:
    // DP + static
    int nthUglyNumber(int n) {
        static vector<int> table(1);
        table[0] = 1;
        int m = table.size();
        static int i2 = 0, i3 = 0, i5 = 0;
        for(int i = m; i < n; i++){
            table.push_back(min(min(table[i2]*2, table[i3]*3), table[i5]*5));
            if(table[i] == table[i2]*2) i2++;
            if(table[i] == table[i3]*3) i3++;
            if(table[i] == table[i5]*5) i5++;
        }
        return table[n-1];
    }
};