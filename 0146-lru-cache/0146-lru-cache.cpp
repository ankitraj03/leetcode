
class LRUCache {
public:
    class Node {
    public:
        int key;
        int val;
        Node* prev;
        Node* next;
        
        Node(int k, int v) : key(k), val(v), prev(nullptr), next(nullptr) {}
    };

    LRUCache(int capacity) : capacity(capacity), head(new Node(-1, -1)), tail(new Node(-1, -1)) {
        head->next = tail;
        tail->prev = head;
    }
    
    int get(int key) {
        if (mp.find(key) == mp.end()) return -1;
        
        Node* node = mp[key];
        remove(node);
        insert(node);
        
        return node->val;
    }
    
    void put(int key, int value) {
        if (mp.find(key) != mp.end()) {
            Node* node = mp[key];
            remove(node);
        } else if (mp.size() == capacity) {
            Node* lru = tail->prev;
            remove(lru);
            mp.erase(lru->key);
            delete lru;
        }
        
        Node* newNode = new Node(key, value);
        insert(newNode);
        mp[key] = newNode;
    }

private:
    int capacity;
    Node* head;
    Node* tail;
    std::unordered_map<int, Node*> mp;
    
    void remove(Node* node) {
        Node* prevNode = node->prev;
        Node* nextNode = node->next;
        
        prevNode->next = nextNode;
        nextNode->prev = prevNode;
    }
    
    void insert(Node* node) {
        Node* nextNode = head->next;
        
        node->next = nextNode;
        node->prev = head;
        
        head->next = node;
        nextNode->prev = node;
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */