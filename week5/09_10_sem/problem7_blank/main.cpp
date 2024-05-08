///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that removes all blank lines from a text file and writes the result to a new file.
///
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>

void removeEmptyLines(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);
    std::vector<std::string> v;
    std::string line;

    while (std::getline(file, line))
    {
        if (!line.empty())
        {
        v.push_back(line);
        v.push_back("\n");
        }
    }
    for (auto & it : v) output << it;
};

int main()
{
    std::string inputFile = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem7_blank/input.txt";
    std::string outputFile = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem7_blank/output.txt";

    removeEmptyLines(inputFile, outputFile);
    return 0;
}
