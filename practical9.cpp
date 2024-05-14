#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(const string& name) : name(name) {}

    virtual void display() const {
        cout << "Name: " << name << endl;
    }
};

class Student : public Person {
private:
    string course;
    float marks;
    int year;

public:
    Student(const string& name, const string& course, float marks, int year)
        : Person(name), course(course), marks(marks), year(year) {}

    void display() const override {
        Person::display();
        cout << "Course: " << course << endl;
        cout << "Marks: " << marks << endl;
        cout << "Year: " << year << endl;
    }
};

class Employee : public Person {
private:
    string department;
    float salary;

public:
    Employee(const string& name, const string& department, float salary)
        : Person(name), department(department), salary(salary) {}

    void display() const override {
        Person::display();
        cout << "Department: " << department << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    Person* person1 = new Person("John");
    Person* student1 = new Student("Alice", "Computer Science", 95.5, 2023);
    Person* employee1 = new Employee("Bob", "HR", 50000.0);

    cout << "\nDisplaying details of person1:" << endl;
    person1->display();

    cout << "\nDisplaying details of student1:" << endl;
    student1->display();

    cout << "\nDisplaying details of employee1:" << endl;
    employee1->display();

    delete person1;
    delete student1;
    delete employee1;

    return 0;
}
