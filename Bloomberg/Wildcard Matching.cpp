/*
	Wildcard Matching
*/

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