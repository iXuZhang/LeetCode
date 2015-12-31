// Palindrome Permutation II
class Solution {
public:
    vector<string> generatePalindromes(string s) {
        vector<string> res;
        vector<int> table(256,0);
        for(char c : s) table[c]++;
        string t;
        char single = 0;
        for(int i = 0; i < 256; i++){
            if(table[i]%2 == 1){
               if(single != 0) return res;
               single = i;
            }
            t += string(table[i]/2, i);
        }
        helper(res, t, single, 0);
        return res;
    }
    
private:
    void helper(vector<string>& res, string& t, char& single, int pos){
        if(pos == t.size()){
            if(single) res.push_back(t + single + string(t.rbegin(), t.rend()));
            else res.push_back(t + string(t.rbegin(), t.rend()));
        }
        for(int i = pos; i < t.size(); i++){
            swap(t[pos], t[i]);
            helper(res, t, single, pos+1);
            swap(t[pos], t[i]);
            while(i + 1 < t.size() && t[i] == t[i+1]) i++;
        }
    }
};