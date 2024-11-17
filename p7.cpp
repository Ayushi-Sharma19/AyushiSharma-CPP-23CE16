#include <iostream>
using namespace std;

class Number {
public:
    int value;
public:
    Number(int v) : value(v) {}
    friend class PrimeChecker;
};

class PrimeChecker {
public:
    bool isPrime(const Number& num) {
        if (num.value <= 1) return false;
        for (int i = 2; i <= num.value / 2; ++i) {
            if (num.value % i == 0) return false;
        }
        return true;
    }
};

int main() {
    Number num(17);
    PrimeChecker checker;

    if (checker.isPrime(num))
        cout << num.value << " is a prime number." << endl;
    else
        cout << num.value << " is not a prime number." << endl;

    return 0;
}
