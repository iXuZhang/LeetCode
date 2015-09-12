class Solution {
public:
    // DP Solution
    int nthUglyNumber(int n) {
        vector<int> res(n,1), table2(n,2), table3(n,3), table5(n,5);
        int k2 = 0, k3 = 0, k5 = 0;
        for(int i = 1; i < n; i++){
            res[i] = min(table2[k2],min(table3[k3],table5[k5]));
            if(res[i] == table2[k2]) k2++; 
            if(res[i] == table3[k3]) k3++; 
            if(res[i] == table5[k5]) k5++;
            table2[i] = res[i]*2;
            table3[i] = res[i]*3;
            table5[i] = res[i]*5;
        }
        return res[n-1];
    }
};