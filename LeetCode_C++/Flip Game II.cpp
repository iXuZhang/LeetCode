// Flip Game II
class Solution {
public:
    /* Backtracking 160 ms  
    // try every possible move for the first player, and recursively check if the second player has any chance to win
    // Time: Exponential
    // ++++ n
    // T(n) = T(n-2) + T(n-2) + ... + c >= 2T(n-2) + c at least 2 Exponential
    bool canWin(string s) {
       const int n = s.size();
       for(int i = 0; i + 1 < n; i++){
           if(s[i] == '+' && s[i+1] == '+'){
               s[i] = s[i+1] = '-';
               if(!canWin(s)) return true;
               s[i] = s[i+1] = '+';
           }
       }
       return false;
    }
    */
    
    // DP use a HashMap to avoid duplicate computation 28ms
    bool canWin(string s) {
       if(table.count(s) > 0) return table[s];
       const int n = s.size();
       for(int i = 0; i + 1 < n; i++){
           if(s[i] == '+' && s[i+1] == '+'){
               s[i] = s[i+1] = '-';
               if(!canWin(s)) return true;
               table[s] = true;
               s[i] = s[i+1] = '+';
           }
       }
       table[s] = false;
       return false;
    }
    
private:
    unordered_map<string,bool> table;
};