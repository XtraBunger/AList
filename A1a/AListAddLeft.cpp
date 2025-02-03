/**
* File: AListRemoveLeft.cpp
* Login id: aya102
* Assignment: A1b
* Author: Aaron Yee
* Version: 1.0
*/
// I declare that this assignment is my own work and that I have correctly acknowledged the
// work of others. I acknowledged that I have read and followed the Academic Honesty and
// Integrity related policies as outlined in the syllabus.
//
// The purpose of this assignment was to test and use assert functions to catch and handle
// errors in the assignment A1a code
//
// _____ Copright Aaron Yee 2025 ____ 
//
// ____ 301586491 ______
//

#include <iostream>
#include <cassert>
#include "AList.h" 

int main(){
    AList<int> testList;
    for (int i{}; i < 12; i++){
        testList.addLeft(i);
    }
    testList.addLeft(1);
}