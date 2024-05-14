#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    string className;
    int year;
    float totalMarks;

public:
    Student() {}
    Student(int rollNo, const string& name, const string& className, int year, float totalMarks)
        : rollNo(rollNo), name(name), className(className), year(year), totalMarks(totalMarks) {}

    // Function to write student record to file
    void writeToFile(ofstream& fout) {
        fout << rollNo << " " << name << " " << className << " " << year << " " << totalMarks << endl;
    }

    // Function to read student record from file
    void readFromFile(ifstream& fin) {
        fin >> rollNo >> name >> className >> year >> totalMarks;
    }

    // Function to display student record
    void display() const {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << className << endl;
        cout << "Year: " << year << endl;
        cout << "Total Marks: " << totalMarks << endl << endl;
    }
};

int main() {
    // Storing records in file
    ofstream fout("students.txt");
    if (!fout) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Student students[5] = {
        Student(1, "John", "Class 10", 2022, 450.5),
        Student(2, "Alice", "Class 11", 2023, 490),
        Student(3, "Bob", "Class 10", 2022, 420),
        Student(4, "Sarah", "Class 12", 2022, 480),
        Student(5, "David", "Class 11", 2023, 470.5)
    };

    for (int i = 0; i < 5; i++) {
        students[i].writeToFile(fout);
    }
    fout.close();

    // Retrieving records from file and displaying them
    ifstream fin("students.txt");
    if (!fin) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    Student student;
    cout << "Student Records:" << endl;
    while (!fin.eof()) {
        student.readFromFile(fin);
        student.display();
    }
    fin.close();

    return 0;
}
