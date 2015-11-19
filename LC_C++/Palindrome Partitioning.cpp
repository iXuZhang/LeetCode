// Palindrome Partitioning
class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        helper(res, s, curr,0);
        return res;
    }

private:
    void helper(vector<vector<string>>& res, string& s, vector<string>& curr, int pos){
        if(pos == s.size()) res.push_back(curr);
        for(int i = pos; i < s.size(); i++)
            if(isPalindrome(s, pos, i)){
                curr.push_back(s.substr(pos, i-pos+1));
                helper(res, s, curr, i+1);
                curr.pop_back();
            }
    }
    
    bool isPalindrome(string& s, int i, int j){
        while(i < j && s[i] == s[j]){
            i++;
            j--;
        }
        return i >= j;
    }
};