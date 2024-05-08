///////////////////////////////////////////////////////////////////////////////
/// \file
/// \version    0.1.0
/// \date       30.01.2024
///
/// TASK DESCRIPTION
///
///Develop a program to encrypt the content of a text file
/// using the Caesar cipher and write the encrypted content to another
/// file. For simplicity, shift each letter by 3 positions in the alphabet.
///////////////////////////////////////////////////////////////////////////////
#include <fstream>
#include <iostream>
#include <cctype> // For isalpha() and tolower()

char caesarCipher(char ch, int shift) {
    if (std::isalpha(ch)) {
        char base = std::islower(ch) ? 'a' : 'A';
        return (ch - base + shift) % 26 + base;
    }
    return ch;
}

void encryptFileContent(const std::string& inputFilePath, const std::string& outputFilePath, int shift = 3)
{
    std::ifstream file(inputFilePath);
    std::ofstream output(outputFilePath);

    std::string line;
    std::string word;
    std::vector<std::string> v;
    int buff = 0;

    while (std::getline(file, line))
    {
        if (!line.empty()) 
        {
            for (char c : line) 
            {
                if (c != ' ') output << caesarCipher(c,shift);
                else output << ' ';
            }
        }
        output<< '\n' ;
    }
};

int main() {
    std::cout << caesarCipher('H',3);
    std::cout << caesarCipher('e',3);
    std::cout << caesarCipher('l',3);
    std::cout << caesarCipher('l',3);
    std::cout << caesarCipher('o',3);
    encryptFileContent("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem11_cipher/input.txt", "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week5/09_10_sem/problem11_cipher/encrypted.txt");
    return 0;
}
