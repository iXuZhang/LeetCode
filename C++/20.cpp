class Solution {
public:
    bool isValid(string s) {
        stack <char> test;
        map <char,char> table = {{'(',')'},{'[',']'},{'{','}'}};
        for(int i=0; i<s.size();i++){
            if(s[i] == ')' || s[i]==']'||s[i]=='}'){
                if(test.empty() || table[test.top()]!=s[i]) return false;
                test.pop();
            }
            else test.push(s[i]);
        }
        return test.empty; //Awesome! test.empty()?true:false; 
    }
};