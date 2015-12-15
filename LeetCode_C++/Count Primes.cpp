// Count Primes
class Solution {
public:
    int countPrimes(int n) {
        if(n <= 2) return 0;
        bool table[n] = {false};
        const int m = sqrt(n);
        int count = 0;
        for(int i = 2; i < n; i++){
            if(table[i] == false){
                count++;
                if(i > m) continue;
                for(int j = 2*i; j < n; j += i)
                    table[j] = true;
            }
        }
        return count;
    }
};