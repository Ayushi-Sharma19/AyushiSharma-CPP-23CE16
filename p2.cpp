#include <iostream>
using namespace std;

class MyClass {
    int a;

public:
    // Constructor
    MyClass(int value = 0) : a(value) {}

    // Overloading ++ (Increment) using member function
    MyClass& operator++() { // Prefix
        a += 5;
        return *this;
    }

    // Overloading -- (Decrement) using friend function
    friend MyClass& operator--(MyClass& obj) { // Prefix
        obj.a -= 1;
        return obj;
    }

    // Overloading unary - (Negation) using member function
    MyClass operator-() const {
        return MyClass(-a);
    }

    // Display function
    void display() const {
        cout << "Value of a: " << a << endl;
    }
};

int main() {
    MyClass obj(-10); // Initialize object with -10
    cout << "Initial: ";
    obj.display();

    // Increment using ++
    ++obj;
    cout << "After increment (++): ";
    obj.display();

    // Decrement using --
    --obj;
    cout << "After decrement (--): ";
    obj.display();

    // Negation using - operator
    obj = -obj;
    cout << "After negation (-): ";
    obj.display();

    return 0;
}

