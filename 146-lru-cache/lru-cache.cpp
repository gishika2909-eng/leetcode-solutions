class LRUCache {
public:
    list<pair<int, int>> lru;
    unordered_map<int, list<pair<int, int>>::iterator> mp;
    int cap;

    LRUCache(int capacity) {
        cap = capacity;
    }

    int get(int key) {
        if (mp.find(key) == mp.end())
            return -1;

        // Move accessed item to front
        lru.splice(lru.begin(), lru, mp[key]);

        return mp[key]->second;
    }

    void put(int key, int value) {
        // If key already exists
        if (mp.find(key) != mp.end()) {
            mp[key]->second = value;
            lru.splice(lru.begin(), lru, mp[key]);
            return;
        }

        // If cache is full
        if (lru.size() == cap) {
            int oldKey = lru.back().first;
            mp.erase(oldKey);
            lru.pop_back();
        }

        // Add new item to front
        lru.push_front({key, value});
        mp[key] = lru.begin();
    }
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */