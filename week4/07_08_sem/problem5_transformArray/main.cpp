///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Array Transformation
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void transformArray(int* arr, int size, int (*transform)(int))`
/// that applies a transformation function to each element of an array.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int transform(int x)  {
    return x + 1;
}

void transformArray(int* arr, int size, int(*transform)(int)){
    for(int i = 0; i < 5; i++){
        arr[i] = transform(arr[i]);
    }
}

int main()
{
    int arr[5] = {1,2,3,4,5};

    transformArray(arr, 5, transform);

    for(int i = 0; i < 5; i++){
        std::cout << arr[i] << ' ';
    }

    return 0;
}
