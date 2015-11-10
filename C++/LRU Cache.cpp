// LRU Cache
class DListNode{
public:
    int key;
    int val;
    DListNode* prev;
    DListNode* next;
    DListNode(int x, int y){
        key = x;
        val = y;
        prev =  next = NULL;
    }
};

class LRUCache{
public:
    LRUCache(int capacity) {
        size = capacity;
        head = tail = NULL;
        count = 0;
    }
    
    int get(int key) {
        cout << key << " get "<< endl;
        if(!cache.count(key)) return -1;
        update(key);
        return cache[key]->val;
    }
    
    void set(int key, int value) {
        if(cache.count(key) > 0){
            update(key);
            cache[key]->val = value;
            return;
        }
        count++;
        DListNode* node = new DListNode(key, value);
        cache[key] = node;
        if(!head) head = node;
        else{
            tail->next = node;
            node->prev = tail;
        }
        if(count > size){
            DListNode* temp = head;
            head = head->next;
            head->prev = NULL;
            cache.erase(temp->key);
            count--;
        }
        tail = node;
    }
    
    void update(int key){
        DListNode* curr = cache[key];
        if(count == 1 || curr == tail) return;
        if(curr == head)
            head = head->next;
        else{
            curr->prev->next = curr->next;
            curr->next->prev = curr->prev;
        }
        tail->next = curr;
        curr->prev = tail;
        curr->next = NULL;
        tail = curr;
    }
    
private:
    DListNode* head;
    DListNode* tail;
    unordered_map<int, DListNode*> cache;
    int count;
    int size;
};