// Group Anagrams
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> table;
        for(string s : strs){
            string key = s;
            sort(key.begin(), key.end());
            table[key].push_back(s);
        }
        for(auto i = table.begin(); i != table.end(); ++i){
            sort(i->second.begin(), i->second.end());
            res.push_back(i->second);
        }
        return res;
    }
};