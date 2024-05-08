///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program to read the content of a text file and write its content in reverse order to another file.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <string>

void reverseFileContent(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);

    std::string line;
    std::vector<std::string> v;

    while (std::getline(file, line))
    {
        std::reverse(line.begin(), line.end());
        v.push_back(line);
        v.push_back("\n");
    }
    
    v.pop_back();
    std::reverse(v.begin(), v.end());

    for (int i = 0; i < v.size(); ++i)
    {
        output << v[i];
    }

};

int main() {
    reverseFileContent("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem5_reverse/input.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem5_reverse/output_reversed.txt");
    return 0;
}
