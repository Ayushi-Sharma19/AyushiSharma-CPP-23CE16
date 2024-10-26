#include<iostream>
using namespace std;

class A {
protected:
    int num1;

public:
    void setNum1(int a) {
        num1 = a;
    }
};

class B : public A {
protected:
    int num2;

public:
    void setNum2(int b) {
        num2 = b;
    }
};

class C : public A {
public:
    void displayNum1() {
        cout << "Number from A (C): " << num1 << endl;
    }
};

class D : public A {
public:
    void displayNum1Again() {
        cout << "Number from A (D): " << num1 << endl;
    }
};

class E : public B {
public:
    void displayNums() {
        cout << "Number from A: " << num1 << ", Number from B: " << num2 << endl;
    }
};

int main() {
    E objE;
    C objC;
    D objD;
    
    objE.setNum1(455);
    objE.setNum2(190);
    objC.setNum1(135);
    objD.setNum1(209);
    
    objE.displayNums();
    objC.displayNum1();
    objD.displayNum1Again();
    
    return 0;
}
