class Solution {
public:
    /* Version 1 slow
    bool isAnagram(string s, string t) {
        if(s.size()!= t.size()) return false;
        map<char,int> table;
        for(char n:s)
            if(table.find(n) == table.end()) table[n] = 1;
            else table[n] += 1;
        for(char n:t)
            if(table.find(n) == table.end()) return false;
            else{
                table[n] -= 1;
                if(table[n] < 0) return false;
            }
        for(auto iter = table.begin(); iter != table.end(); iter++)
            if(iter->second != 0) return false;
        return true;
    }
    */
    
    // Version 2 12ms vector not Hash Table
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> table(26,0);
        for(char n:s) table[n - 'a'] += 1;
        for(char n:t) table[n - 'a'] -= 1;
        for(int n:table) if(n != 0) return false;
        return true;
    }
};