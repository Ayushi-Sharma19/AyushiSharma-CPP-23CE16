#include<iostream>
using namespace std;

class Num {
    int a;
public:
    Num(int val) : a(val) {}

    void operator++() {
        a += 5;
    }

    void operator--() {
        a -= 1;
    }

    void operator-() {
        a = -a;
    }

    friend void negate(Num &n);

    void display() {
        cout << "Value: " << a << endl;
    }
};

void negate(Num &n) {
    n.a = -n.a;
}

int main() {
    Num n(10);

    ++n;
    n.display();

    --n;
    n.display();

    -n;
    n.display();

    negate(n);
    n.display();

    return 0;
}
