// Wildcard Matching
class Solution {
public:
    bool isMatch(string s, string p) {
        int i = 0, j = 0;
        int last = -1;
        int match = 0;
        const int m = s.size();
        const int n = p.size();
        while(i < m){
            if (j < n && (p[j] == '?' || p[j] == s[i])){i++; j++;} 
            else if (j < n && p[j] == '*') {
                last = j++;
                match = i;
            }
            else if (last >= 0) {
                i = ++match; 
                j = last + 1;
            }
            else return false;
        }
        while (j < n && p[j] == '*'){j++;}
        return j == n; 
    }
    
    /* DP
    bool isMatch(string s, string p) {
        int n = s.size();
        vector<bool> table(n+1, false);
        table[0] = true;
        int m = p.size();
        for(int i = 0; i < m; i++){
            if(p[i] == '*'){
                for(int j = 0; j < n; j++)
                    if(table[j] == true) table[j+1] = true;
            }
            else{
                vector<bool> temp(n+1, false);
                for(int j = 0; j < n; j++)
                    if(table[j] == true && (p[i] == '?' || s[j] == p[i])) temp[j+1] = true;
                table = temp;
            }
        }
        return table[n];
    }
    */
};