#include "../Algos.h"
#include "../lib/HashTable.h"
#include <gtest/gtest.h>


TEST(AlgosTests, MAC) {
    int x = 42;
    int y = 16;
    int sum = 100;
    int oldSum = sum;
    int expectedNewSum = oldSum + x * y;
    EXPECT_EQ(
        expectedNewSum,
        MAC(x, y, sum)
    );
    EXPECT_EQ(
        expectedNewSum,
        sum
    );
}

TEST(HashTable, InsertExistsGet) {
    arrayNode nodes[5] = { {string("one"), 1}, {string("two"), 2}, {string("three"), 3}, {string("four"), 4}, {string("five"), 5} };
    HashTable _ht(256);
    _ht.insert(nodes[0]);
    EXPECT_TRUE(
        _ht.exists(nodes[0].key)
    );
    EXPECT_FALSE(
        _ht.exists(nodes[1].key)
    );
    _ht.insert(nodes[1]);
    _ht.insert(nodes[2]);
    _ht.insert(nodes[3]);
    EXPECT_TRUE(
        _ht.exists(nodes[2].key)
    );
    EXPECT_FALSE(
        _ht.exists(nodes[4].key)
    );
    arrayNode node;
    _ht.get(nodes[2].key, &node);
    EXPECT_EQ(
        nodes[2].value,
        node.value
    );
}

