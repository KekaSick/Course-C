///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function to find and replace all occurrences of a word in a file.
///
///////////////////////////////////////////////////////////////////////////////

#include <fstream> // For fstream
#include <sstream> // For stringstream
#include <iostream>
#include <vector>

void findAndReplaceInFile(const std::string& filePath, const std::string& toFind, const std::string& toReplace)
{
    std::ifstream file(filePath);

    std::string line;
    std::string word;
    std::vector<std::string> v;
    int buff = 0;

    while (std::getline(file, line))
    {
        for (char it : line)
        {
            if (it == ' ') buff++;
            else buff = 0;

            if (it != ' ') word += it;

            if (buff == 1)
            {
                v.push_back(word);
                v.push_back(" ");
                word = "";
            }
        }

        if (!word.empty())
        {
            v.push_back(word);
            word = "";
        }
        v.push_back("\n");
    }

    for (auto& it : v)
    {
        if (it == toFind) it = toReplace;
    }

    std::ofstream file_update(filePath);
    for (const auto& it : v)
    {
        file_update << it;
    }


};
int main() 
{
    std::string path = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem4_replace/file.txt";
    findAndReplaceInFile(path, "oldWord", "newWord");
    return 0;
}