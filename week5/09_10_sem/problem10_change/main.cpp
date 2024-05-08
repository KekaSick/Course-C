///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
///Write a program that reads a text file, converts all lowercase letters to uppercase, and writes the result to a new file.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <cctype> // For toupper()

void convertToLowercase(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);
    std::string line;
    std::string up;

    while (std::getline(file, line))
    {
        for (auto & it : line)
        {
            up = toupper(it);
            output << up;
        }
            output << '\n';
    }
};

int main() {
    convertToLowercase("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem10_change/input.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem10_change/output_uppercase.txt");
    return 0;
}
