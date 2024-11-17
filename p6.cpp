#include <iostream>
using namespace std;

template <typename T>
struct Student {
    T name;
    int age;
    T course;
    T department;

    void display() {
        cout << "Name: " << name << ", Age: " << age
             << ", Course: " << course << ", Department: " << department << endl;
    }
};

int main() {
    Student<string> student = {"Alice", 19, "ECE", "Engineering"};
    student.display();
    return 0;
}
