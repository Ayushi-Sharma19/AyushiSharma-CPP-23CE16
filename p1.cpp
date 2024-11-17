#include <iostream>
using namespace std;

class Base {
public:
    virtual int sum(int a, int b, int c) {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    int sum(int a, int b, int c) override {
        return a + b + c + 10; // Adding 10 to differentiate
    }
};

int main() {
    Base* basePtr = new Derived();
    Derived derivedObj;

    cout << "Base class sum via derived object: " << basePtr->Base::sum(1, 2, 3) << endl;
    cout << "Derived class sum: " << derivedObj.sum(1, 2, 3) << endl;

    delete basePtr;
    return 0;
}
