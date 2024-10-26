#include<iostream>
using namespace std;

class Base1 {
protected:
    int num1;

public:
    void setNum1(int a) {
        num1 = a;
    }
};

class Base2 {
protected:
    int num2;

public:
    void setNum2(int b) {
        num2 = b;
    }
};

class Derived : public Base1, public Base2 {
public:
    void displaySum() {
        cout << "Sum of two numbers: " << (num1 + num2) << endl;
    }
};

int main() {
    Derived obj;
    obj.setNum1(4510);
    obj.setNum2(5320);
    obj.displaySum();
    
    return 0;
}
