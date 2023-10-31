#include <iostream>
#include <fstream>
#include <vector>

void extract_words(const std::string &input, const std::string &output, int count) {
    std::ifstream source("../data/" + input);
    std::ofstream dest("../data/" + output);
    
    std::string word;
    int count = 0;
    
    while (std::getline(source, word) && count < count) {
        dest << word << std::endl;
        count++;
    }
}

int main() {
    extract_words("words.txt", "100_words.txt", 100);
    extract_words("words.txt", "1000_words.txt", 1000);
    extract_words("words.txt", "10000_words.txt", 10000);
    extract_words("words.txt", "100000_words.txt", 100000);
    
    std::cout << "complete!" << std::endl;
    return 0;
}
