#include <iostream>
using namespace std;

class Number {
    int a;
public:
    Number(int value = 0) : a(value) {}

    // Member function
    Number operator+(const Number& obj) {
        return Number(a + obj.a);
    }

    Number operator-(const Number& obj) {
        return Number(a - obj.a);
    }

    // Friend function
    friend Number operator+(const Number&, const Number&);
    friend Number operator-(const Number&, const Number&);

    void display() { cout << "Value: " << a << endl; }
};

Number operator+(const Number& obj1, const Number& obj2) {
    return Number(obj1.a + obj2.a);
}

Number operator-(const Number& obj1, const Number& obj2) {
    return Number(obj1.a - obj2.a);
}

int main() {
    Number n1(10), n2(20);

    cout << "Using Member Functions:" << endl;
    Number result1 = n1 + n2;
    result1.display();
    Number result2 = n1 - n2;
    result2.display();

    cout << "Using Friend Functions:" << endl;
    Number result3 = operator+(n1, n2);
    result3.display();
    Number result4 = operator-(n1, n2);
    result4.display();

    return 0;
}
