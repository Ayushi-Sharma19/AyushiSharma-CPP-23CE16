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

class Derived : public Base {
public:
    void displayProduct() {
        cout << "Product of two numbers: " << (num1 * num2) << endl;
    }
};

int main() {
    Derived obj;
    obj.setNumbers(99, 42);
    obj.displayProduct();
    
    return 0;
}
