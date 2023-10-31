#pragma once
#include <string>
#include <iostream>
#include <unordered_map>

class TrieNode {
public:
    bool flag;  
    std::unordered_map<char, TrieNode*> children;
    TrieNode() : flag(false) {}
};

class Trie {
public:
    Trie();
    void insert(const std::string &word);
    bool search(const std::string &word) const;
    void remove(const std::string &word);
    
private:
    TrieNode* root;
};
