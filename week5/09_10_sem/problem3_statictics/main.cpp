///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Write a program to count the number of lines, words, and characters in a text file.
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <sstream>

void countFileStatistics(const std::string& filePath)
{
    std::ifstream file(filePath);

    std::string line;
    int words = 0, lines = 0, characters = 0;
    int buff = 0;

    while (std::getline(file, line))
    {
        lines++;
        words++;
        if (!line.empty()) 
        {
            for (char c : line) 
            {
                characters++;
                if (c == ' ') buff++;
                else buff = 0;
                if (buff == 1) words++;
            }
        }
    }

    std::cout << "Lines: " << lines << '\n' << "Words: " << words << '\n' << "Characters: " << characters;
};

int main() 
{
    countFileStatistics("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem3_statictics/file.txt");
    return 0;
}