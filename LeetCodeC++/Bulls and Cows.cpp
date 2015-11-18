// Bulls and Cows
class Solution {
public:
    string getHint(string secret, string guess) {
        int A = 0;
        int B = 0;
        vector<int> tableA(10,0);
        vector<int> tableB(10,0);
        const int n = secret.size();
        for(int i = 0; i < n; i++){
            int s = secret[i] - '0';
            int g = guess[i] - '0';
            if(s == g){
                A++;
                continue;
            }
            tableA[s]++;
            tableB[g]++;
            if(tableA[s] && tableB[s]){
                tableA[s]--;
                tableB[s]--;
                B++;
            }
            if(tableA[g] && tableB[g]){
                tableA[g]--;
                tableB[g]--;
                B++;
            }
        }
        return to_string(A) + "A" + to_string(B) + "B";
    }
};