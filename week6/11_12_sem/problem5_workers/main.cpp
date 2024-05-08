///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program that reads information about company employees (name, position, salary) 
/// from a text file and increases the salary of each employee by 10%, writing the updated 
/// information to a new file.
/// Write two functions: for txt and csv file.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <string>


void enhanceSallaryTxt(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);
    std::string line;
    std::string word;
    std::vector<std::string> v;

    while (std::getline(file, line))
    {
        for (auto & it : line)
        {
            if (it == ',') 
            {
            v.push_back(word);
            v.push_back(",");
            word = "";
            }
            else word+=it;
        }
        if (!word.empty())
        {
            v.push_back(" "); //otlichie)
            v.push_back(std::to_string(std::stod(word)+std::stod(word)*0.1));
            word = "";
        }
        v.push_back("\n");
    }
    for (auto & it : v)
    {
        output << it;
    }

};



void enhanceSallaryCsv(const std::string& inputFilePath, const std::string& outputFilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);
    std::string line;
    std::string word;
    std::vector<std::string> v;

    while (std::getline(file, line))
    {
        for (auto & it : line)
        {
            if (it == ',') 
            {
            v.push_back(word);
            v.push_back(",");
            word = "";
            }
            else word+=it;
        }
        if (!word.empty())
        {
            v.push_back(std::to_string(std::stod(word)+std::stod(word)*0.1));
            word = "";
        }
        v.push_back("\n");
    }
    for (auto & it : v)
    {
        output << it;
    }
};

int main() 
{
    //txt
    enhanceSallaryTxt("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem5_workers/input.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem5_workers/output.txt");
    //csv
    enhanceSallaryCsv("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem5_workers/input.csv", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem5_workers/output.csv");
    return 0;
}
