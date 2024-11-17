#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b) {
    return a + b;
}

template <typename T>
T multiply(T a, T b) {
    return a * b;
}

int main() {
    cout << "Sum (int): " << sum(10, 20) << endl;
    cout << "Sum (float): " << sum(5.5, 2.5) << endl;

    cout << "Multiply (int): " << multiply(4, 5) << endl;
    cout << "Multiply (float): " << multiply(2.5, 1.5) << endl;

    return 0;
}
