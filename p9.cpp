#include <iostream>
using namespace std;

class A {
private:
    int privateA = 10;
protected:
    int protectedA = 20;

    friend class FriendClass;
};

class B {
private:
    int privateB = 30;
protected:
    int protectedB = 40;

    friend class FriendClass;
};

class C {
private:
    int privateC = 50;
protected:
    int protectedC = 60;

    friend class FriendClass;
};

class FriendClass {
public:
    void display(A& a, B& b, C& c) {
        cout << "Class A - Private: " << a.privateA << ", Protected: " << a.protectedA << endl;
        cout << "Class B - Private: " << b.privateB << ", Protected: " << b.protectedB << endl;
        cout << "Class C - Private: " << c.privateC << ", Protected: " << c.protectedC << endl;
    }
};

int main() {
    A a;
    B b;
    C c;
    FriendClass friendClass;

    friendClass.display(a, b, c);

    return 0;
}
