class TrieNode {
public:
    
    bool isEnd;
    TrieNode* next[26];
    // Initialize your data structure here.
    TrieNode(){
            memset (next, 0, sizeof(an_array)); // memory set
            isEnd = false;
        }
};

class Trie {
public:

    Trie() {
        root = new TrieNode();
    }

    // Inserts a word into the trie.
    void insert(string word) {
        TrieNode* curr = root;
        for(int i = 0; i < word.size(); i++){
            if(!curr->next[word[i]-'a']) curr->next[word[i]-'a'] = new TrieNode();
            curr = curr->next[word[i] - 'a'];
        } 
        curr->isEnd = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode* res = find(word);
        return res && res->isEnd;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        return find(prefix);
    }

private:

    TrieNode* root;
    
    TrieNode* find(string word){
        TrieNode* curr = root;
        for(int i = 0; i < word.size() && curr; i++)
            curr = curr->next[word[i]-'a'];
        return curr;
    }
    
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");