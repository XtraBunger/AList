/**
* File: AListRemoveLeft.cpp
* Login id: aya102
* Assignment: A1a
* Author: Aaron Yee
* Version: 1.0
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// The purpose of this assignment was to create the function AList to act as a circular queue
//
// _____ Copright Aaron Yee 2025 ____ 
//
// ____ 301586491 ______
//

#include <iostream>
#include <cassert>
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

    std::cout << '\n';
    for (int i {6}; i <= 8; i++) {
        testList.addLeft(i);
        std::cout << i << " added to the left. Current size is: " << testList.size() << "\n";
    }

    std::cout << "\nCurrent contents:\n";
  
    testList.display();
    std::cout << '\n';
    testList.ddisplay();

    std::cout << '\n';
    for (int i {}; i < 3; i++) {
        int removed = testList.removeRight();
        std::cout << removed << " removed from the right. Current size is: " << testList.size() << "\n";
    }

    std::cout << "\nCurrent contents:\n";
    testList.display();

    std::cout << '\n';
    for (int i {}; i < 3; i++) {
        int removed = testList.removeLeft();
        std::cout << removed << " removed from the left. Current size i: " << testList.size() << "\n";
    }

    std::cout << '\n';

    for (int i {1}; i <= 4; i++) {
        testList.addLeft(i);
        std::cout << i << " added to the left. Current size is: " << testList.size() << "\n";
    }

    std::cout << '\n';
    testList.ddisplay();

    std::cout << "\nClearing the list...\n\n";
    testList.clear();

    testList.ddisplay();

    return 0;
}
