#include <iostream>
#include "AList.h" //Test

int main() {
    AList<int> list;

    std::cout << "List is initially empty? " << (list.empty() ? "Yes" : "No") << "\n";

    std::cout << "\nAdding elements to the right:\n";
    for (int i = 1; i <= 5; ++i) {
        list.addRight(i);
        std::cout << "Added " << i << " to the right. Current size: " << list.size() << "\n";
    }

    std::cout << "\nList contents after adding to the right:\n";
    list.display();

    std::cout << "\nAdding elements to the left:\n";
    
    for (int i = 6; i <= 8; ++i) {
        list.addLeft(i);
        std::cout << "Added " << i << " to the left. Current size: " << list.size() << "\n";
    }

    std::cout << "\nList contents after adding to the left:\n";
    list.display();
    
    std::cout << "\nRemoving elements from the right:\n";
    for (int i = 0; i < 3; ++i) {
        int removed = list.removeRight();
        std::cout << "Removed " << removed << " from the right. Current size: " << list.size() << "\n";
    }

    std::cout << "\nList contents after removing from the right:\n";
    list.display();
    
    std::cout << "\nRemoving elements from the left:\n";
    for (int i = 0; i < 3; ++i) {
        int removed = list.removeLeft();
        std::cout << "Removed " << removed << " from the left. Current size: " << list.size() << "\n";
    }
    
    std::cout << "\nList contents after removing from the left:\n";
    list.display();
    
    std::cout << "\nClearing the list:\n";
    list.clear();
    std::cout << "List cleared. Is the list empty? " << (list.empty() ? "Yes" : "No") << "\n";
    
    return 0;
}
