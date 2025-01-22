#include <iostream>
#include "AList.h" 

int main() {
    AList<int> testList;

    if (__cplusplus == 202002L) {
        std::cout << "C++20\n";
    }
    else if (__cplusplus == 201703L) {
        std::cout << "C++17\n";
    }
    else if (__cplusplus == 201402L) {
        std::cout << "C++14\n";
    }
    else if (__cplusplus == 201103L) {
        std::cout << "C++11\n";
    }
    else if (__cplusplus == 199711L) {
        std::cout << "C++98\n";
    }
    else {
        std::cout << "Pre-standard C++\n";
    }

    std::cout << "Is the list empty: " << (testList.empty() ? "Yes" : "No") << "\n";

    for (int i{ 1 }; i <= 5; ++i) {
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
    testList.ddisplay();

    std::cout << "\nClearing the list:\n";
    testList.clear();
    std::cout << "List cleared. Is the list empty? " << (testList.empty() ? "Yes" : "No") << "\n";

    return 0;
}
