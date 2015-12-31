// Word Pattern
class Solution {
public:
    // two map is esaier
    // char, string should be unique, so should be the key of map
    bool wordPattern(string pattern, string str) {
        unordered_map<char, int> charTable;
        unordered_map<string, int> strTable;
        int i = 0;
        istringstream input(str);
        for(string word; input >> word; i++){
            if(i == pattern.size() || charTable[pattern[i]] != strTable[word])
            return false;
            charTable[pattern[i]] = strTable[word] = i+1;
        }
        return i == pattern.size();
    }
};