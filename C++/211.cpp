class WordDictionary {
public:

    class TrieNode{
    public: //must be public
        bool isEnd;
        TrieNode* next[26];
        TrieNode(){
            isEnd = false;
            memset(next, NULL, sizeof(next));
        }
    };
    
    WordDictionary(){
        root = new TrieNode();
    }

    // Adds a word into the data structure.
    void addWord(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.size(); i++){
            if(curr->next[word[i] - 'a'] == NULL) curr->next[word[i] - 'a'] = new TrieNode();
            curr = curr->next[word[i] - 'a'];
        }
        curr->isEnd = true;
    }

    // Returns if the word is in the data structure. A word could
    // contain the dot character '.' to represent any one letter.
    bool search(string word) {
        TrieNode* curr = root;
        return backTracking(word, root, 0);
    }
    
private:
    TrieNode* root;
    
    bool backTracking(string& word, TrieNode* curr, int begin){
        while(begin < word.size() && word[begin] != '.' && curr){
            curr = curr->next[word[begin] - 'a'];
            begin++;
        }
        if(begin == word.size() && curr) return curr->isEnd;
        for(int n = 0; n< 26 && curr; n++)
            if(backTracking(word, curr->next[n], begin+1)) return true;
        return false;
    }
};

// Your WordDictionary object will be instantiated and called as such:
// WordDictionary wordDictionary;
// wordDictionary.addWord("word");
// wordDictionary.search("pattern");