// Unique Word Abbreviation
class ValidWordAbbr {
public:
    // ["dog"],isUnique("dig"),isUnique("dug"),isUnique("dag"),isUnique("dog"),isUnique("doge")
    // [false,false,false,true,true]
    ValidWordAbbr(vector<string> &dictionary) {
        for(string s : dictionary){
            int n = s.size();
            string key =  n > 2 ? s[0] + to_string(n-2) + s[n-1] : s;
            if(table.count(key) == 0) table[key] = s;
            else table[key] = "";
        }
    }

    bool isUnique(string word) {
        int n = word.size();
        string key =  n > 2 ? word[0] + to_string(n-2) + word[n-1] : word;
        return !table.count(key) || table[key] == word;
    }
    
private:
    unordered_map<string, string> table;
};


// Your ValidWordAbbr object will be instantiated and called as such:
// ValidWordAbbr vwa(dictionary);
// vwa.isUnique("hello");
// vwa.isUnique("anotherWord");