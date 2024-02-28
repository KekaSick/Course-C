///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a function to read a file containing integers 
/// separated by spaces or newlines, sum these integers, and write the result to another file.
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <cmath>
#include <fstream>

int sumIntegersInFile(const std::string& inputFilePath, const std::string& outputFilePath){
    std::ifstream file(inputFilePath);
    std::ofstream outputfile(outputFilePath);
    char n;
    int c = 0;
    while(file.get(n)){
        if (std::isdigit(n)) c += n - '0';
    }
    outputfile << c;
    return c;
}

int main() {
    std::cout << sumIntegersInFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem1_sum/input.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem1_sum/output.txt");
    return 0;
}