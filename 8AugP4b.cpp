#include<iostream>
#include<string>
using namespace std;

template<typename T>
class Student {
    T n, a, c, d;
public:
    Student(T name, T age, T course, T dept) : n(name), a(age), c(course), d(dept) {}

    void display() {
        cout << "Name: " << n << ", Age: " << a << ", Course: " << c << ", Department: " << d << endl;
    }
};

int main() {
    Student<string> s("ayushi", "19", "CSE", "Engineering");
    s.display();

    return 0;
}
