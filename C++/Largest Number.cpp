// Largest Number
class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> table(nums.size());
        for(int i = 0; i < nums.size(); i++) table[i] = to_string(nums[i]);
        sort(table.begin(), table.end(), [](string& i, string& j){ return i + j > j + i; });
        string res;
        for(string s : table) res += s;
        return res[0] == '0' ? "0": res; // corner case [0,0]
    }
};