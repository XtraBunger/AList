#include <iostream>
#include "AList.h" 

int main() {
    AList<int> testList;

    std::cout << "Is the list empty: " << (testList.empty() ? "Yes" : "No") << "\n";

    for (int i {1}; i <= 5; i++) {
        testList.addRight(i);
        std::cout << i << " added to right side. Current size is: " << testList.size() << "\n";
    }

    std::cout << "\nCurrent contents:\n";
    testList.display();

    for (int i {6}; i <= 8; i++) {
        testList.addLeft(i);
        std::cout << i << " added to the left. Current size is: " << testList.size() << "\n";
    }

    std::cout << "\nCurrent contents:\n";
    testList.ddisplay();
    testList.display();

    for (int i {}; i < 3; i++) {
        int removed = testList.removeRight();
        std::cout << removed << " removed from the right. Current size is: " << testList.size() << "\n";
    }

    std::cout << "\nCurrent contents:\n";
    testList.display();

    for (int i {}; i < 3; i++) {
        int removed = testList.removeLeft();
        std::cout << removed << " removed from the left. Current size i: " << testList.size() << "\n";
    }

    for (int i {1}; i <= 4; i++) {
        testList.addLeft(i);
        std::cout << i << " added to the left. Current size is: " << testList.size() << "\n";
    }

    testList.ddisplay();

    std::cout << "\nClearing the list...\n";
    testList.clear();

    testList.ddisplay();

    return 0;
}
