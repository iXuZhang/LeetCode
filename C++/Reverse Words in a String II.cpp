// Reverse Words in a String II
class Solution {
public:
    void reverseWords(string &s) {
        istringstream words(s);
        string word, res;
        while(words >> word)
            res = word + " " + res;
        if(!res.empty()) res.pop_back();
        s = res;
    }
};