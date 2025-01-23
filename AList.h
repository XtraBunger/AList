#ifndef ALIST_H
#define ALIST_H

#include <iostream>
#include <iomanip>

template <typename Object>

class AList {

private:
    int theSize;
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
        delete[] objects;
        theCapacity = 12;
        objects = new Object[theCapacity]();
        theSize = 0;
        left = 0; // array index of location just before the left-most list element 
        right = 1; // array index just past the right-most list element
    }

    // Operations 

    void addLeft(const Object x) {
        // Insert a new object at the left end 
        theSize++;
        objects[left] = x;
        left = (left - 1 + theCapacity) % theCapacity;
    }

    void addRight(const Object x) {
        // Insert a new object at the right end
        theSize++;
        objects[right] = x;
        right = (right + 1) % theCapacity;
    }

    Object removeRight() {
        // Remove and return the object at the right end
        theSize--;
        right = (right - 1 + theCapacity) % theCapacity;
        Object x = objects[right];
        objects[right] = Object(); // I think should clear
        return x;
    }

    Object removeLeft() {
        // Remove and return the object at the left end
        theSize--;
        left = (left + 1) % theCapacity;
        Object x = objects[left];
        objects[left] = Object(); // I think should clear
        return x;
    }

    void display() const {
        int j = (left + 1) % theCapacity;
        // print out the contents of the deque
        for (int i{}; i < theSize; i++) {
            std::cout << "Current index is: " << j << " and value stored is: " << objects[j] << '\n';
            j = (j + 1) % (theCapacity);
        }
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
