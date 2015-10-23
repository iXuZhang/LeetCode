// Group Shifted Strings
class Solution {
public:
    vector<vector<string>> groupStrings(vector<string>& strings) {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> table;
        for(string str : strings){
            int diff = str[0] - 'a' >= 0 ? str[0] - 'a' : str[0] - 'a' + 26;
            string key;
            for(char c : str)
                key += c - diff >= 'a' ? c - diff : c - diff + 26;
            table[key].push_back(str);
        }
        for(auto i = table.begin(); i != table.end(); ++i){
            sort(i->second.begin(), i->second.end());
            res.push_back(i->second);
        }
        return res;
    }
};