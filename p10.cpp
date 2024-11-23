#include <iostream>
using namespace std;
class B;
class C;

class A {
private:
    int privateA;

protected:
    int protectedA;

public:
    A(int a, int b) : privateA(a), protectedA(b) {}
    friend void accessData(A, B, C);
};

class B {
private:
    int privateB;

protected:
    int protectedB;

public:
    B(int b, int c) : privateB(b), protectedB(c) {}
    friend void accessData(A, B, C);
};

class C {
private:
    int privateC;

protected:
    int protectedC;

public:
    C(int c, int d) : privateC(c), protectedC(d) {}
    friend void accessData(A, B, C);
};

void accessData(A a, B b, C c) {
    cout << "Accessing data from class A:" << endl;
    cout << "Private A: " << a.privateA << endl;
    cout << "Protected A: " << a.protectedA << endl;

    cout << "Accessing data from class B:" << endl;
    cout << "Private B: " << b.privateB << endl;
    cout << "Protected B: " << b.protectedB << endl;

    cout << "Accessing data from class C:" << endl;
    cout << "Private C: " << c.privateC << endl;
    cout << "Protected C: " << c.protectedC << endl;
}

int main() {
    
    A a(1, 2);
    B b(3, 4);
    C c(5, 6);
    accessData(a, b, c);
    return 0;
}