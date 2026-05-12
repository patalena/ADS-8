// Copyright 2021 NNTU-CS
#include <iostream>
#include <string>
#include "bst.h"

int main() {
    BST<std::string> words;
    makeTree(words, "src/war_peace.txt");
    std::cout << "=== BST analysis results ===" << std::endl;
    std::cout << "tree height: " << words.depth() << std::endl;
    std::cout << "============================" << std::endl;
    std::cout << "\nwords sorted by frequency:" << std::endl;
    std::cout << "--------------------------" << std::endl;
    printFreq(words);
    return 0;
}
