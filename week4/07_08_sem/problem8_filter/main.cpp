///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Filter Array
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `int* filter(int* arr, int size, int& newSize, bool (*filterFunc)(int))`
/// that filters an array based on a predicate function and returns a new array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

bool ifOdd(int x) {
    return x % 2 != 0;
}

int* filter(int* arr, int size, int& newSize, bool (*filterFunc)(int)) {
    for (int i = 0; i < size; i++) {
        if (filterFunc(arr[i])) {
            newSize++;
        }
    }
    int* tempArr = new int[newSize];
    int j = 0;
    for (int i = 0; i < size; i++) {
        if (filterFunc(arr[i])) {
            tempArr[j] = arr[i];
            j++;
        }
    }
    return tempArr;
}

int main() {

    int arr[5] = {1, 2, 3, 4, 5};
    int size = 5;
    int newSize = 0;

    int* tempArr = filter(arr, size, newSize, ifOdd);

    for (int i = 0; i < newSize; i++) {
        std::cout << tempArr[i] << " ";
    }
    
    std::cout << std::endl;
    
    delete[] tempArr;
    return 0;
}