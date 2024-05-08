///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
/// Write a program to copy a binary file to another file in reverse byte order.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <vector>

void reverseCopyBinaryFile(const std::string& inputFilePath, const std::string& outputFilePath) 
{

    std::ifstream inputFile(inputFilePath, std::ios::binary);
    std::ofstream outputFile(outputFilePath, std::ios::binary);

    // RAZMER
    inputFile.seekg(0, std::ios::end);
    std::streampos fileSize = inputFile.tellg();
    inputFile.seekg(0, std::ios::beg);

    // INPUT
    std::vector<char> buffer(fileSize);
    inputFile.read(buffer.data(), fileSize);

    for (auto it = buffer.rbegin(); it != buffer.rend(); ++it) {
        outputFile.write(&(*it), sizeof(char));
    }
}

int main() 
{
    reverseCopyBinaryFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem9_byte/input_binary.bin", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem9_byte/output_reversed.bin");
    return 0;
}
