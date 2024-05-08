///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create a program to extract a specific line number from a text file and write it to another file.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <string>

void extractLineToFile(const std::string& inputFilePath, const std::string& outputFilePath, int lineNum)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);

    std::string line;
    std::vector<std::string> v;
    int c = 0;

    while (std::getline(file, line))
    {   
        c++;
        if (c == lineNum) output << line;
    }
};
int main() {
    extractLineToFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem6_line/input.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem6_line/specific_line.txt", 3);
    return 0;
}

