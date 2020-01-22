#include "HashTable.h"

//Private methods
size_t HashTable::getHash(string key) {
    return hash<string>{}(key)%_htSize;
};

bool HashTable::find(string key, arrayNode* node) {
    //find the key in our ht
    size_t hash = getHash(string(key));
    for(auto it = _htArray[hash].begin(); it !=_htArray[hash].end(); it++){
        arrayNode tmpNode = *it;
        if(tmpNode.key == string(key)) {
            node->key = tmpNode.key;
            node->value = tmpNode.value;
            return true;
        }
    }
    return false;
};

//Public methods
HashTable::HashTable() {
    _htSize = 256;
    _htArray = new forward_list<arrayNode>[_htSize]; //default size
};

HashTable::HashTable(size_t size) {
    _htSize = size;
    _htArray = new forward_list<arrayNode>[size];
}

bool HashTable::exists(char* key) {
    exists(string(key));
};

bool HashTable::exists(string key) {
    arrayNode node;
    return find(key, &node);
};

void HashTable::insert(arrayNode node) {
    _htArray[getHash(string(node.key))].push_front(node);
};

bool HashTable::get(string key, arrayNode* node) {
    return find(key, node);
}

HashTable::~HashTable() {
};
