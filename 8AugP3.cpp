#include<iostream>
using namespace std;

class Val {
    int a;
public:
    Val(int x) : a(x) {}

    Val operator+(const Val &v) {
        return Val(a + v.a);
    }

    Val operator-(const Val &v) {
        return Val(a - v.a);
    }

    void display() const {
        cout << "Result: " << a << endl;
    }

    friend Val add(const Val &v1, const Val &v2);
    friend Val sub(const Val &v1, const Val &v2);
};

Val add(const Val &v1, const Val &v2) {
    return Val(v1.a + v2.a);
}

Val sub(const Val &v1, const Val &v2) {
    return Val(v1.a - v2.a);
}

int main() {
    Val v1(134), v2(678);

    Val res1 = v1 + v2;
    res1.display();

    Val res2 = sub(v1, v2);
    res2.display();

    return 0;
}
