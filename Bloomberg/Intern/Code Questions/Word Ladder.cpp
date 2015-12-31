/*
Word Ladder
*/

class Solution {
public:
    int ladderLength(string beginWord, string endWord, unordered_set<string>& wordList) {
        const int m = beginWord.size();
        queue<string> table;
        table.push(beginWord);
        int len = 1;
        while(!table.empty()){
            const int n = table.size();
            for(int k = 0; k < n; k++){
                string curr = table.front();
                if(curr == endWord) return len;
                table.pop();
                for(int i = 0; i < m; i++){
                    char temp = curr[i];
                    for(char c = 'a'; c <= 'z'; c++){
                        curr[i] = c;
                        if(wordList.count(curr)){
                            table.push(curr);
                            wordList.erase(curr);
                        } 
                    }
                    curr[i] = temp;
                }
            }
            len++;
        }
        return 0;
    }
};