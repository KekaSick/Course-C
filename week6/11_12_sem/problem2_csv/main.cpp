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

void solution(std::istream& input){
    std::cout << "bruh";
}

int main() {
    std::ifstream file("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem2_csv/csv.txt");
    std::ofstream output("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week6/11_12_sem/problem2_csv/output.txt");
    solution(file);
    file.close();
    return 0;
}
