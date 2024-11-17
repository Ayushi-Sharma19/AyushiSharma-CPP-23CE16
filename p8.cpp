#include <iostream>
using namespace std;

class Student {
    string name, department, course;
    int age;

public:
    Student(string n, int a, string c, string d)
        : name(n), age(a), course(c), department(d) {}

    friend void displayDetails(const Student& student);
};

void displayDetails(const Student& student) {
    cout << "Name: " << student.name << ", Age: " << student.age
         << ", Course: " << student.course << ", Department: " << student.department << endl;
}

int main() {
    Student s("Emma", 21, "IT", "Science");
    displayDetails(s);

    return 0;
}
