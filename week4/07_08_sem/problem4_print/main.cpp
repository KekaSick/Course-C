///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Print Data
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write overloaded functions `void print(int)` and `void print(double)` that
/// print an integer and a double, respectively.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>

void print(int num){
    std::cout << "Int value: " << num << std::endl;
}

void print(double num){
    std::cout << "Double value: " << num << std::endl;
}

int main()
{
    int iNum;
    double dNum;

    std::cout << "Enter integer value" << std::endl;
    std::cin >> iNum;
    std::cout << std::endl;

    std::cout << "Enter double value" << std::endl;
    std::cin >> dNum;
    std::cout << std::endl;

    std::cout << "Check this out" << std::endl;

    print(iNum);
    print(dNum);

    return 0;
}
