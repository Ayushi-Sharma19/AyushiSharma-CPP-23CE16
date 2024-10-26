#include<iostream>
using namespace std;

class Base {
protected:
    int num1, num2;

public:
    void setNumbers(int a, int b) {
        num1 = a;
        num2 = b;
    }
};

class FirstDerived : public Base {
public:
    void displayFirstNumber() {
        cout << "First number: " << num1 << endl;
    }
};

class SecondDerived : public Base {
public:
    void displaySecondNumber() {
        cout << "Second number: " << num2 << endl;
    }
};

int main() {
    FirstDerived obj1;
    SecondDerived obj2;
    
    obj1.setNumbers(35, 150);
    obj2.setNumbers(53, 105);
    
    obj1.displayFirstNumber();
    obj2.displaySecondNumber();
    
    return 0;
}
