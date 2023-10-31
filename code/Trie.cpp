#include "Trie.h"

Trie::Trie() : root(new TrieNode()) {}

void Trie::insert(const std::string &word) {
    TrieNode* node = root;
    for (char temp : word) {
        if (!node->children[temp]) {
            node->children[temp] = new TrieNode();
        }
        node = node->children[temp];
    }
    node->flag = true;
}

bool Trie::search(const std::string &word) const {
    TrieNode* node = root;
    for (char temp : word) {
        if (!node->children[temp]) {
            return false;
        }
        node = node->children[temp];
    }
    return node->flag;
}

void Trie::remove(const std::string &word) {
    TrieNode* node = root;
    for (char temp : word) {
        if (!node->children[temp]) {
            return;
        }
        node = node->children[temp];
    }
    node->flag = false;
}
