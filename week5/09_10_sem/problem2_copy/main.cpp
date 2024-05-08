///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create a function that copies the content of one file to another file.
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream> 
#include <iostream>

void copyFile(const std::string& sourceFilePath, const std::string& destinationFilePath)
{
    std::ifstream file(sourceFilePath);
    std::ofstream outputfile(destinationFilePath);
    char symbol;
    while (file.get(symbol))
    {
        outputfile << symbol;
    }
};

int main() {
    copyFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem2_copy/source.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem2_copy/destination.txt");
    return 0;
}
