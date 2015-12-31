// LRU Cache
class DLinkedList{
public:
    int val;
    int key;
    DLinkedList* next;
    DLinkedList* prev;
    DLinkedList(int x,int y): val(x), key(y){}
};

class LRUCache{
public:
    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        if(table.count(key) == 0) return -1;
        update(table[key]);
        return tail->val;
    }
    
    void set(int key, int value) {
        if(table.count(key) > 0){
           table[key]->val = value;
           update(table[key]);
           return;
        }
        DLinkedList *node = new DLinkedList(value,key);
        table[key] = node;
        if(!head){
            head = tail = node;
            size--;
            return;
        }
        tail->next = node;
        node->prev = tail;
        tail = tail->next;
        if(size > 0) size--;
        else{
            table.erase(head->key);
            head = head->next;
            head->prev = NULL;
        }
    }
    
    void update(DLinkedList* p){
        if(p == tail) return;
        if(p == head){
            head = head->next;
            head->prev = NULL;
        }
        else{
            p->prev->next = p->next;
            p->next->prev = p->prev;
        }
        tail->next = p;
        p->prev = tail;
        p->next = NULL;
        tail = p;
    }
private:
    int size;
    DLinkedList *head;
    DLinkedList *tail;
    unordered_map<int,DLinkedList*> table;
};