/**
* File: AListRemoveLeft.cpp
* Login id: aya102
* Assignment: A1b
* Author: Aaron Yee
* Version: 1.0
*/
// This file is to test the assertion for addRight
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
        testList.addRight(i);
    }
    testList.addRight(1);
}