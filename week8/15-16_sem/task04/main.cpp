#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <vector>
#include <fstream>
#include <string>
#include <sstream>

/*
Create a program that manages a dictionary of terms and 
their definitions. Implement functionalities to read term-definition 
pairs from a file, store them in a data structure (e.g., map or 
unordered_map), allow users to look up definitions of terms, add new
 term-definition pairs, delete existing pairs, and save the dictionary 
 to a file.

Requirements:

Implement a data structure to represent the dictionary with terms as keys and their definitions as values.

Implement functions/methods to read term-definition pairs from a file and populate the dictionary.

Implement a function/method to look up the definition of a term in the dictionary and display it.

Implement a function/method to add a new term-definition pair to the dictionary.

Implement a function/method to delete an existing term-definition pair from the dictionary.

Implement a function/method to save the dictionary to a file.

Provide a user interface allowing users to interact with the dictionary (e.g., through a command-line interface or a simple graphical user interface).

Ensure error handling for file input/output operations and dictionary operations (e.g., handling invalid input, file not found, etc.).
*/

// Function to load dictionary from a file
void loadDictionary(const std::string& filename, std::map<std::string, std::string>& dictionary) 
{
    std::ifstream input(filename);
    std::string str, key, value;

    while (std::getline(input, str))
    {
        std::stringstream line(str);
        line >> key >> value;
        std::getline(line, value);
        value.erase(value.begin());
        dictionary.insert({key, value});
    }
}

// Function to display definition of a term
void lookupTerm(const std::string& term, const std::map<std::string, std::string>& dictionary) 
{
    for (auto & it : dictionary)
    {
        if (it.first == term)
        {
            std::cout << term << " - " << it.second << '\n';
            return;
        }
    }
    std::cout << "Error, there is no " << term << " in dictionary\n";
}

// Function to add a new term-definition pair to the dictionary
void addTerm(std::map<std::string, std::string>& dictionary) 
{
    std::string key, value;

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    
    std::cout << "Enter the term: ";
    std::getline(std::cin, key);
    std::cout << "Enter the definition: ";
    std::getline(std::cin, value);

    dictionary.insert({key, value});
    std::cout << key << " was added\n";
}

// Function to delete a term from the dictionary
void deleteTerm(const std::string& term, std::map<std::string, std::string>& dictionary) 
{
    auto it = dictionary.find(term);
    if (it != dictionary.end()) 
    {
        dictionary.erase(it);
        std::cout << term << " deleted\n";
    }
    else std::cout << "Error, this term doesn't exist\n";
}

// Function to save dictionary to a file
void saveDictionary(const std::string& filename, const std::map<std::string, std::string>& dictionary) 
{
    std::ofstream output(filename);

    for (auto & it : dictionary) output << it.first << " - " << it.second << '\n';

    std::cout << "Dictionary saved";
}

int main() 
{
    std::map<std::string, std::string> dictionary;
    std::string filename = "/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week8/15-16_sem/task04/dictionary.txt";
    loadDictionary(filename, dictionary);

    int choice;
    std::string term;

    do {
        std::cout << "\nDictionary Application\n"
                  << "1. Look up a term\n"
                  << "2. Add a new term\n"
                  << "3. Delete a term\n"
                  << "4. Save dictionary to file\n"
                  << "5. Exit\n"
                  << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter the term to look up: ";
                std::cin >> term;
                lookupTerm(term, dictionary);
                break;
            case 2:
                addTerm(dictionary);
                break;
            case 3:
                std::cout << "Enter the term to delete: ";
                std::cin >> term;
                deleteTerm(term, dictionary);
                break;
            case 4:
                saveDictionary(filename, dictionary);
                break;
            case 5:
                std::cout << "Exiting the program." << std::endl;
                break;
            default:
                std::cout << "Invalid choice. Please enter a number between 1 and 5." << std::endl;
        }
    } while (choice != 5);

    return 0;
}
