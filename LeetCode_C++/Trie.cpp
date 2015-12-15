// Trie
class TrieNode {
public:
    bool isEnd;
    TrieNode* children[26];
    // Initialize your data structure here.
    TrieNode() {
        isEnd = false;
        memset(children, 0, sizeof(children));
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
        for(char c : word){
            if(!curr->children[c - 'a']) // important!!
                curr->children[c - 'a'] = new TrieNode();
            curr = curr->children[c - 'a'];
        }
        curr->isEnd = true;
    }

    // Returns if the word is in the trie.
    bool search(string word) {
        TrieNode* curr = root;
        for(char c : word){
            if(!curr->children[c - 'a']) return NULL;
            curr = curr->children[c - 'a'];
        }
        return curr->isEnd;
    }

    // Returns if there is any word in the trie
    // that starts with the given prefix.
    bool startsWith(string prefix) {
        TrieNode* curr = root;
        for(char c : prefix){
            if(!curr->children[c - 'a']) return NULL;
            curr = curr->children[c - 'a'];
        }
        return true;
    }

private:
    TrieNode* root;
};

// Your Trie object will be instantiated and called as such:
// Trie trie;
// trie.insert("somestring");
// trie.search("key");