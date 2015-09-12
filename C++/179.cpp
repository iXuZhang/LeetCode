class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string res;
        vector<string> table;
        for(int num : nums) table.push_back(to_string(num));
        sort(table.begin(), table.end(),[](string i, string j){return i + j > j + i;});//Awesome!!!
        for(string s : table) res += s;
        while(res[0] == '0' && res.size() > 1) res.erase(0,1);
        return res;
    }
};