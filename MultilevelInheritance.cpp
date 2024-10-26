#include<iostream>
using namespace std;

class Base {
protected:
    int num1;

public:
    void setNum1(int a) {
        num1 = a;
    }
};

class FirstDerived : public Base {
protected:
    int num2;

public:
    void setNum2(int b) {
        num2 = b;
    }
};

class SecondDerived : public FirstDerived {
public:
    void displaySum() {
        cout << "Sum of two numbers: " << (num1 + num2) << endl;
    }
};

int main() {
    SecondDerived obj;
    obj.setNum1(523);
    obj.setNum2(102);
    obj.displaySum();
    
    return 0;
}
