// ZigZag Conversion
class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows == 1) return s;
        vector<string> table(numRows);
        bool down = true;
        int j = 0;
        for(char c : s){
            table[j] += c;
            if(j == 0 && !down) down = true;
            if(j == numRows -1 && down) down = false;
            if(down) j++;
            else j--;
        }
        string res;
        for(string str : table)
            res += str;
        return res;
    }
};