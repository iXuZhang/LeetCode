class Solution {
public:
    /* Version 1
    void reverseWords(string &s) {
        string res, curr;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' ' && curr != ""){
                res = curr + " " + res;
                curr = "";
            }
            if(s[i] != ' ') curr += s[i];
        }
        if(curr != "") res = curr + " " + res;
        s = res.substr(0,res.size()-1); // res.size() can be 0, substr(0,0-1);
    }
    */
    
    // Version 2
    void reverseWords(string &s) {
        string res;
        int pos = 0;
        for (int i = 0; i < s.size(); i ++){
            if (s[i] == ' '){
                if (i > pos) res = s.substr(pos, i-pos) + " " + res;
                pos = i + 1;
            }
            else if (i == s.size()-1) // nice  else if
                res = s.substr(pos, s.size()-pos) + " " + res;
        }
        s = res.substr(0,res.size()-1) ;
    }
};