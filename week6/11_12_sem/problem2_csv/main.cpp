///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Create program to read data from a CSV file (comma separated) 
/// and calculate the average value in each column. Separate into function
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream> 
#include <iostream>
#include <fstream>
#include <vector>

void meanValueColumn(const std::string& inputFile)
{
    std::ifstream file(inputFile);
    std::vector<std::vector<int>> table;
    std::vector<int> row;
    std::string num;
    std::string line;

    while(std::getline(file, line))
    {
        for (auto & it : line)
        {
            if (it == ',') 
            {
            row.push_back(std::stoi(num));
            num = "";
            }
            else num+=it;
        }
        if (!num.empty())
        {
            row.push_back(std::stoi(num));
            num = "";
        }
        table.push_back(row);
        row.clear();
    }

    double buff = 0;

    for (int i = 0; i < table[0].size(); ++i)
    {
        for (int j = 0; j < table.size(); ++j)
        {
            buff += table[j][i];
            // std::cout << table[j][i] << '\n';
        }
        buff = buff / table.size();
        std::cout << buff << ' ';
    }

    // for (auto & it : table)
    // {
    //     for (auto & jt : it)
    //     {
    //         std::cout << jt << ' ';
    //     }
    //     std::cout << '\n';
    // }
}

int main() 
{
    meanValueColumn("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem2_csv/csv.csv");
    return 0;
}
