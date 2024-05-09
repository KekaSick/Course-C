/*
You are tasked with creating a program to manage a database 
of students' information. Each student record consists of the 
following fields: name, age, and grade. You need to implement 
a structure to represent a student record, including various 
overloaded operators for comparison and input/output operations.

In the main program, you should provide functionality to read 
student records from a file, add new records, delete existing 
records, modify records, and display all records. Additionally, 
you should implement the ability to save the updated database 
to a file.

Furthermore, you are required to store the collection of student 
records in a container such as a vector or any other appropriate 
container provided by the Standard Template Library (STL).

Your program should support the following operations:

Reading student records from a file and storing them in the database.
Adding a new student record to the database.
Deleting an existing student record from the database.
Modifying the information of an existing student record.
Displaying all student records.
Saving the updated database to a file.
*/

#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <iterator>

struct Student {
    std::string name;
    int age;
    double grade;

    friend std::istream& operator>>(std::istream& in, Student& student) {
        in >> student.name >> student.age >> student.grade;
        return in;
    }

    friend std::ostream& operator<<(std::ostream& out, const Student& student) {
        out << "Name: " << student.name << ", Age: " << student.age << ", Grade: " << student.grade;
        return out;
    }
};

void readRecordsFromFile(const std::string& InputFile, std::vector<Student>& data)
{
    std::ifstream file(InputFile);
    std::string dummy;
    Student student;
    file >> student;
    while(std::getline(file, dummy))
    {
        data.push_back(student);
        file >> student;
    }
}

void addRecord(std::vector<Student>& data)
{
    Student student;
    std::cout << "Please, enter name, age and grade space with a space:\n" ;
    std::cin >> student;
    data.push_back(student);
}

void deleteRecord(std::vector<Student>& data, int id)
{
    data.erase(std::next(data.begin(), id-1));
}

void displayRecords(std::vector<Student>& data)
{
    for (auto & it : data)std::cout << it << '\n';
}

void writeRecordsToFile(const std::string outputFile, std::vector<Student>& data)
{
    std::ofstream output(outputFile);
    for (auto & it : data)output << it << '\n';
}

int main() {
    std::vector<Student> students;

    readRecordsFromFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week8/15-16_sem/task03/students.txt", students);

    addRecord(students);
    deleteRecord(students, 1);
    displayRecords(students);

    writeRecordsToFile("/Users/mverzhbitskiy/Documents/GitHub/Course-C(BP)/week8/15-16_sem/task03/updated_students.txt", students);

    return 0;
}
