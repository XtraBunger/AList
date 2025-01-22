#include <iostream>
#include "AList.h" 

int main() {
    AList<int> testList;

    std::cout << "Is the list empty: " << (testList.empty() ? "Yessir" : "No") << "\n";

    for (int i {1}; i <= 5; ++i) {
        testList.addRight(i);
        std::cout << "Added " << i << " to the right. Current size: " << testList.size() << "\n";
    }

    std::cout << "\nList contents after adding to the right:\n";
    testList.display();

    std::cout << "\nAdding elements to the left:\n";
    
    for (int i = 6; i <= 8; ++i) {
        testList.addLeft(i);
        std::cout << "Added " << i << " to the left. Current size: " << testList.size() << "\n";
    }

    std::cout << "\nList contents after adding to the left:\n";
    testList.display();
    
    std::cout << "\nRemoving elements from the right:\n";
    for (int i = 0; i < 3; ++i) {
        int removed = testList.removeRight();
        std::cout << "Removed " << removed << " from the right. Current size: " << testList.size() << "\n";
    }

    std::cout << "\nList contents after removing from the right:\n";
    testList.display();
    
    std::cout << "\nRemoving elements from the left:\n";
    for (int i = 0; i < 3; ++i) {
        int removed = testList.removeLeft();
        std::cout << "Removed " << removed << " from the left. Current size: " << testList.size() << "\n";
    }
    
    std::cout << "\nList contents after removing from the left:\n";
    testList.display();
    
    std::cout << "\nClearing the list:\n";
    testList.clear();
    std::cout << "List cleared. Is the list empty? " << (testList.empty() ? "Yes" : "No") << "\n";
    
    return 0;
}
