// Word Ladder
class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        queue<string> table;
        int len = 0;
        const int m = beginWord.size();
        table.push(beginWord);
        while(!table.empty()){
            len++;
            int n = table.size();
            for(int k = 0; k < n; k++){ // a cycle of n
                string s = table.front();
                table.pop();
                if(s == endWord) return len;
                for(int i = 0; i < m; i++){
                    char temp = s[i];
                    for(char c = 'a'; c <= 'z'; c++){
                        s[i] = c;
                        if(wordList.count(s) > 0){
                            wordList.erase(s); // important! 
                            table.push(s); 
                        } 
                    }
                    s[i] = temp;
                }
            }
        }
        return 0;
    }
};