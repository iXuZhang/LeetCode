// Regular Expression Matching
class Solution {
public:
    bool isMatch(string s, string p) {
        const int m = s.size();
        const int n = p.size();
        vector<bool> table(m+1, false);
        table[0] = true;
        for(int i = 0; i < n; i++){
            if(i + 1 < n && p[i+1] == '*'){
                for(int j = 0; j < m; j++){
                    if(table[j] == true && (s[j] == p[i] || p[i] == '.'))
                    table[j+1] = true;
                }
                i++;
            }
            else{
                vector<bool> temp(m+1, false);
                for(int j = 0; j < m; j++){
                    if(table[j] == true && (s[j] == p[i] || p[i] == '.'))
                    temp[j+1] = true;
                }
                table = temp;
            }
        }
        return table[m];
    }
};