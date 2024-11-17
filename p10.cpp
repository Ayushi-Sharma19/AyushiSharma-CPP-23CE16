#include <iostream>
using namespace std;

// Forward declaration of classes
class A;
class B;
class C;

// Friend function declaration
void displayData(A&, B&, C&);

class A {
private:
    int privateA;
protected:
    int protectedA;
public:
    A(int pA, int prA) : privateA(pA), protectedA(prA) {}
    friend void displayData(A&, B&, C&);
};

class B {
private:
    int privateB;
protected:
    int protectedB;
public:
    B(int pB, int prB) : privateB(pB), protectedB(prB) {}
    friend void displayData(A&, B&, C&);
};

class C {
private:
    int privateC;
protected:
    int protectedC;
public:
    C(int pC, int prC) : privateC(pC), protectedC(prC) {}
    friend void displayData(A&, B&, C&);
};

// Friend function definition
void displayData(A& objA, B& objB, C& objC) {
    cout << "Class A: Private = " << objA.privateA << ", Protected = " << objA.protectedA << endl;
    cout << "Class B: Private = " << objB.privateB << ", Protected = " << objB.protectedB << endl;
    cout << "Class C: Private = " << objC.privateC << ", Protected = " << objC.protectedC << endl;
}

int main() {
    // Create objects of A, B, and C
    A objA(10, 20);
    B objB(30, 40);
    C objC(50, 60);

    // Call the friend function to display data
    displayData(objA, objB, objC);

    return 0;
}
