#include<iostream>
using namespace std;

template<typename T>
T add(T x, T y) {
    return x + y;
}

int add(int x, int y, int z) {
    return x + y + z;
}

int main() {
    cout << "Sum of two ints: " << add(56, 10) << endl;
    cout << "Sum of three ints: " << add(36, 46, 65) << endl;
    cout << "Sum of two doubles: " << add(26.5, 37.5) << endl;

    return 0;
}
