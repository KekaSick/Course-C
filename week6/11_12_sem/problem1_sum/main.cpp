///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       14.02.2024
///
/// TASK DESCRIPTION
///
/// Write a function to read a file containing integers 
/// separated by spaces or newlines, sum these integers, 
/// and write the result to another file.
///////////////////////////////////////////////////////////////////////////////

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <stdexcept>

int sumIntegersInFile(const std::string& inputFilePath, const std::string& outputFilePath) {
    std::ifstream file(inputFilePath);
    std::ofstream outputfile(outputFilePath);

    int buff;
    int sum = 0;

    while (file >> buff){
        sum+=buff;
    }

    outputfile << sum;
    file.close();
    outputfile.close();

    return 0;
}

int main() {
    std::string input = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem1_sum/input.txt";
    std::string output = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem1_sum/output.txt";
    sumIntegersInFile(input, output);
    return 0;
}
