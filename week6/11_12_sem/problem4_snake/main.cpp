///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Read a single integer n from the file. In another file, write a matrix filled 
/// in the following way:
/// 1   2   3   4
/// 12  13  14  5
/// 11  16  15  6
/// 10  9   8   7
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <sstream> 

void snakeToFile(const std::string& inputFilePath, const std::string& outputfilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputfilePath);
    std::string line;
    std::vector<std::vector<int>> table;
    std::vector<int> row;
    int n; 

    std::getline(file, line);
    n = std::stoi(line);
    
    for (int i = 0; i < n; ++i) 
    {
        table.push_back(row);
        for (int j = 0; j < n; ++j) table[i].push_back(0);
    }

    int head = 1, pos = 0;
    for (int i = 0; i < n / 2 + 1; ++i)
    {
        for (int j = pos; j < n - pos; ++j) //forward
        {
            table[i][j] = head;
            head++;
        }
        pos++;

        for (int j = pos; j < n + 1 - pos; ++j) //down
        {
            table[j][n - pos] = head;
            head++;
        }

        for (int j = n - 1 - pos; j >= pos - 1; --j) //backward
        {
            table[n - 1 - i][j] = head;
            head++;
        }

        for (int j = n - 1 - pos; j >= pos; --j) //up
        {
            table[j][pos - 1] = head;
            head++;
        }
    }

    for (auto & it : table)
    {
        for (auto & jt : it) output << jt << '\t';
        output << '\n';
    }
};

int main() 
{
    snakeToFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem4_snake/input.txt","/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem4_snake/output.txt");
    return 0;
}