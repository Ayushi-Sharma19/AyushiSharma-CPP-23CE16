#include<iostream>
#include<string>
using namespace std;

template<typename T>
struct Student {
    T n, a, c, d;

    void display() {
        cout << "Name: " << n << ", Age: " << a << ", Course: " << c << ", Department: " << d << endl;
    }
};

int main() {
    Student<string> s = {"Ayushi", "19", "cse", "Engineering"};
    s.display();

    return 0;
}
