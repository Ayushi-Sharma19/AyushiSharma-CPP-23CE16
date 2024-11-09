#include <iostream>
using namespace std;

class Base {
public:
    int a, b, c;
    Base(int x, int y, int z) : a(x), b(y), c(z) {}
    virtual int sum() {
        return a + b + c;
    }
};

class Derived : public Base {
public:
    Derived(int x, int y, int z) : Base(x, y, z) {}
    int sum() override {
        return a + b + c;
    }
};

int main() {
    Base base(99, 52, 38);
    Derived derived(43, 45, 86);

    cout << "Sum from derived object calling base sum: " << derived.Base::sum() << endl;
    cout << "Sum from base object calling derived sum: " << base.sum() << endl;

    return 0;
}
