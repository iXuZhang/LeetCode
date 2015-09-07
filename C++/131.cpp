class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        vector<string> curr;
        backTracking(res, curr, s, 0);
        return res;
    }
    
private:
    /* Version 1
    void backTracking(vector<vector<string>>& res, vector<string>& curr, string& s, int pos){
        if(pos == s.size()) res.push_back(curr);
        else if(pos < s.size()){
            string temp = s.substr(pos, 1);
            while (pos< s.size()){
                if(isPalindrome(temp)){
                    curr.push_back(temp);
                    backTracking(res, curr, s, pos+1);
                    curr.pop_back();
                }
                pos++;
                temp += s[pos];
            }
        }
    }
    
    bool isPalindrome(string& s){
        int n = s.size();
        for(int i = 0; i < n/2; i++)
            if(s[i] != s[n-i-1]) return false;
        return true;
    }
    */
    
    // Version2 string , use index!!!!
    void backTracking(vector<vector<string>>& res, vector<string>& curr, string& s, int pos){
        if(pos == s.size()){
            res.push_back(curr);
            return;
        }
        int prev = pos; 
        while (pos < s.size()){
            if(isPalindrome(s, prev, pos)){
                curr.push_back(s.substr(prev, pos - prev + 1));
                backTracking(res, curr, s, pos+1);
                curr.pop_back();
            }
            pos++;
        }
    }
    
    bool isPalindrome(string& s, int begin, int end){
        while(begin <= end)
            if(s[begin++] != s[end--]) return false;
        return true;
    }
};