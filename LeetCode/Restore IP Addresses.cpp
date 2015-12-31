// Restore IP Addresses
class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> res;
        if(s.size() > 12) return res;
        helper(res, s, "", 0, 0);
        return res;
    }
    
private:
    void helper(vector<string>& res, string& s, string curr, int pos, int count){
        if(count == 4 && pos == s.size()) res.push_back(curr.substr(0,s.size()+3)); 
        if(count == 4 || pos == s.size()) return;
        for(int i = count == 3 ? s.size() - 1 : pos; i < s.size(); i++){
            if(s[pos] == '0' && i != pos) break;
            string num = s.substr(pos, i - pos + 1);
            if(stoi(num) > 255) break;
            helper(res, s, curr + num + ".", i+1, count+1);
        }
    }
};