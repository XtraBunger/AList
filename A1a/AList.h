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

#ifndef ALIST_H
#define ALIST_H

#include <iostream>
#include <cassert>
#include <iomanip>

template <typename Object>

class AList {

private:
    int theSize {};
    int left;
    int right;
    int theCapacity;
    Object* objects;

public:
    AList() {
        theCapacity = 12;
        objects = new Object[theCapacity];
        theSize = 0;
        left = 0; // array index of location just before the left-most list element 
        right = 1; // array index just past the right-most list element
    }

    ~AList() {
        delete[] objects;
    }

    bool empty() const {
        return size() == 0;
    }

    int size() const {
        return theSize;
    }

    void clear() {
        theCapacity = 12;
        theSize = 0;
        left = 0; // array index of location just before the left-most list element 
        right = 1; // array index just past the right-most list element
    }

    // Operations 

    void addLeft(const Object x) {
        // Insert a new object at the left end 
        theSize++;
        assert(("The size of the array exeeded the capacity",theSize <= theCapacity));
        objects[left] = x;
        left = (left - 1 + theCapacity) % theCapacity;
    }
        // For this function to work correctly the size must be equal to or less than theCapacity

    void addRight(const Object x) {
        // Insert a new object at the right end
        theSize++;
        assert(("The size of the array exeeded the capacity",theSize <= theCapacity)); 
        objects[right] = x;
        right = (right + 1) % theCapacity;
    }
        // For this function to work correctly the size must be equal to or less than theCapacity

    Object removeRight() {
        // Remove and return the object at the right end
        assert(("The size of the array cannot be less than 0",theSize > 0));
        theSize--;
        right = (right - 1 + theCapacity) % theCapacity;
        Object x = objects[right];
        return x;
    }
        // For this function to work correctly the size must be greater than 0

    Object removeLeft() {
        // Remove and return the object at the left end
        assert(("The size of the array cannot be less than 0",theSize > 0));
        theSize--;
        left = (left + 1) % theCapacity;
        Object x = objects[left];
        return x;
    }
        // For this function to work correctly the size must be greater than 0

    void display() const {
        int j = (left + 1) % theCapacity;
        // print out the contents of the deque
        std::cout << "[ ";
        for (int i{}; i < theSize; i++) {
            std::cout << objects[j] << " ";
            j = (j + 1) % (theCapacity);
        }
        std::cout << "]\n";
    }

    void ddisplay() const {
        // print out the contents of the objects 
        display();
        std::cout << "Full array values\n";
        std::cout << std::left << std::setw(10) << "Index" << std::setw(20) << "Value" << std::setw(20) << "Address" << '\n';

    for (int i = 0; i < theCapacity; i++) {
        Object x = objects[i];
        Object *y = &objects[i];

        std::cout << std::left << std::setw(10) << i << std::setw(20) << x << std::setw(20) << reinterpret_cast<uintptr_t>(y) << '\n';
    }

    std::cout << "The capacity is: " << theCapacity << '\n';
    std::cout << "The size is: " << theSize << '\n';
    std::cout << "Left value is: " << left << '\n';
    std::cout << "Right value is: " << right << '\n';
    }
};

#endif
