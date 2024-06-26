///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Develop a program to append content to the end of an existing file without overwriting its current content.
///////////////////////////////////////////////////////////////////////////////

#include <fstream>
#include <iostream>
#include <string>

void appendToFile(const std::string& filePath, const std::string& content)
{
    std::ofstream output(filePath, std::ios_base::app);
    output << content;
};

int main() {
    appendToFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem8_append/input.txt", "Appended content.\n");
    return 0;
}
