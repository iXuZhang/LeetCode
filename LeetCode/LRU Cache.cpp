// LRU Cache
class LRUCache{
public:
    struct DListNode{
        int key;
        int val;
        DListNode* prev;
        DListNode* next;
        DListNode(int x, int y): key(x), val(y), prev(NULL), next(NULL){}
    };
    
    LRUCache(int capacity) {
        size = capacity;
        head = NULL;
        tail = NULL; // important
    }
    
    int get(int key) {
        if(table.count(key) == 0)
            return -1;
        int value = table[key]->val;
        update(key);
        return value;
    }
    
    void set(int key, int value) {
        if(table.count(key)){
            update(key);
            table[key]->val = value;
            return;
        }
        DListNode* node = new DListNode(key, value);
        table[key] = node;
        if(!head){
            head = node;
            tail = node;
        }
        else{
            node->next = head;
            head->prev = node;
            head = node;
        }
        if(size > 0) size--;
        else{
            table.erase(tail->key);
            tail = tail->prev;
            tail->next = NULL;
        }
    }
    
    void update(int key){
        DListNode* curr = table[key];
        if(curr == head) return;
        if(curr == tail){
            tail = tail->prev;
            tail->next = NULL;
        }
        else{
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }
        curr->prev = NULL;
        curr->next = head;
        head->prev = curr;
        head = curr;
    }
    
    DListNode* head;
    DListNode* tail;
    int size;
    unordered_map<int, DListNode*> table;
};