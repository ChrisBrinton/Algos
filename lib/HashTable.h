#include <string>
#include <forward_list>
#include <cstddef>
#include <functional>
#include <iostream>

using namespace std;

struct arrayNode {
    string key;
    int value;
};

class HashTable {
    private:
        size_t _htSize;
        forward_list<arrayNode>* _htArray;

        size_t getHash(string key);
        bool find(string key, arrayNode* node);

    public:
        HashTable();
        HashTable(size_t);
        bool exists(char* key);
        bool exists(string key);
        bool get(string key, arrayNode* node);
        void insert(arrayNode);
        ~HashTable();

};