///////////////////////////////////////////////////////////////////////////////
/// \file
/// \brief      Main module for Problem: Execute Callback
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function `void executeCallback(void (*callback)())` that takes a 
/// function pointer and executes the callback function.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>


void callbackF(){
    std::cout << "Che eto";
}

void executeCallback(void(*callback)()){
    callback();
}

int main()
{
    executeCallback(callbackF);
    return 0;
}
