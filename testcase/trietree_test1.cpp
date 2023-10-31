#include <iostream>
#include <cassert>
#include "../code/Trie.h"

// test1
void test_insert_and_retrieve() {
    Trie trie; 
    trie.insert("apple");
    assert(trie.search("apple") == true);

    std::cout << "test 1 passed!" << std::endl;
}

//test2
void test_non_existent_word() {
    Trie trie;
    trie.insert("apple");
    trie.insert("banana");
    assert(trie.search("orange") == false);  // 确保"orange"不能被找到

    std::cout << "test 2 passed!" << std::endl;
}


//test3
void test_delete_word() {
    Trie trie;
    trie.insert("apple");
    trie.remove("apple");
    assert(trie.search("apple") == false);

    std::cout << "test 3 passed!" << std::endl;
}


int main() {
    test_insert_and_retrieve();
    test_non_existent_word();
    test_delete_word();

    std::cout << "all tests passed!" << std::endl;
    return 0;
}
