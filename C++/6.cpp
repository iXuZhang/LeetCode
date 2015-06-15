class Solution {
public:
/* 28ms
    string convert(string s, int numRows) {
        vector<string> res(numRows);
        string ans;
        bool up = true;
        if(numRows == 1 || s == "") return s;
        for(int i = 0, n = 0; i < s.size(); i++){
            res[n] += s[i];
            if(n == numRows - 1 && up || n == 0 && !up ) up = !up;
            up ? n++ : n--;
        }
        for(string i : res) ans += i;
        return ans;
    }
*/
// Version2 12ms math version not good...
    string convert(string s, int numRows) {
        std::string ans(s.size(),'0');
        char* p = &ans[0];
        int part_len = 2*numRows - 2;
        if(numRows == 1 || s.size() == 0) return s;
        for(int i=0; i<numRows; ++i)
        {
            if(i == 0 || i == numRows -1)
                for(int j=i; j<s.size(); j+= part_len) *(p++) = s[j];
            else
            {
                int offset = 2 * i;
                for(int j=i; j<s.size(); offset=part_len-offset,j+= offset) *(p++) = s[j];
            }
        }
        return ans;
    }
};