///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       22.01.2022
///
/// TASK DESCRIPTION
///
/// Read a single integer size n from the file. In another file, write a matrix filled 
/// in the following way:
/// 1   2   3   4
/// 8   7   6   5
/// 9   10  11  12
/// 16  15  14  13
///
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <sstream> 

void countFileMatrix(const std::string& inputFilePath, const std::string& outputfilePath)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputfilePath);
    std::string line;

    int n; 
    std::getline(file, line);
    n = std::stoi(line);

    int head = 1;
    std::vector<std::string> buffV;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i%2 == 0) output << head << '\t';
            else {buffV.push_back(std::to_string(head)); buffV.push_back("\t");}
            head++;
        }
        if (!buffV.empty())
        {
            buffV.pop_back();
            std::reverse(buffV.begin(), buffV.end());
            for (auto & it : buffV)
            {
                output << it;
            }
            buffV.clear();
        }
        output << '\n';
    }
};

int main() 
{
    countFileMatrix("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem3_matrix/input.txt","/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem3_matrix/output.txt");
    return 0;
}