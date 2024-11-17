#include <iostream>
using namespace std;

template <typename T>
class Student {
    T name;
    int age;
    T course;
    T department;
public:
    Student(T n, int a, T c, T d) : name(n), age(a), course(c), department(d) {}

    void display() {
        cout << "Name: " << name << ", Age: " << age
             << ", Course: " << course << ", Department: " << department << endl;
    }
};

int main() {
    Student<string> student("John", 20, "CSE", "Engineering");
    student.display();
    return 0;
}
