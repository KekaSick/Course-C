///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for a Problem: Sum digits
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program that takes a number and
/// find sum of digits recursively.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

int digiSum(int num){
    if (num == 0) return 0; 
    return (num % 10 + digiSum(num / 10)); 
}

int main()
{
    int num;
    std::cin >> num;
    std::cout << digiSum(num);
    return 0;
}
