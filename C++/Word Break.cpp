// Word Break
class Solution {
public:
    // DP table[i] = true means i is OK pos to go on to match and before i everything is matched.
    // O(n2)
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        const int n = s.size();
        bool table[n+1] = {false};
        table[0] = true;
        /*for(int i = 0; i < n; i++){ 
            if(!table[i]) continue;
            for(int j = i; j < n; j++) // i is the begin, j is the end of the substring
                if(wordDict.count(s.substr(i, j - i + 1))) table[j+1] = true;
        }*/
        for(int i = 0; i < n; i++){
            for(int j = i; j >= 0; j--){ // j is the begin, i is the end of the substring
                if(!table[j]) continue;
                if(wordDict.count(s.substr(j, i - j + 1))){
                    table[i+1] = true;
                    break;
                } 
            }
        }
        return table[n];
    }

/* a map to reduce overlap
    bool wordBreak(string s, unordered_set<string>& wordDict) {
        if(s.empty()) return true;
        if(table.count(s)) return false;
        for(int i = 0; i < s.size(); i++)
            if(wordDict.count(s.substr(0,i+1)) && wordBreak(s.substr(i+1), wordDict)) return true;
        table.insert(s);
        return false;
    }
    unordered_set<string> table;
*/    
};