class MyHashMap {
public:
    int map[1000005];

    MyHashMap() {
        for (int i = 0; i < 1000005; i++) {
            map[i] = -1;
        }
    }

    void put(int key, int value) {
        map[key] = value;
    }

    int get(int key) {
        return map[key];
    }

    void remove(int key) {
        map[key] = -1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
