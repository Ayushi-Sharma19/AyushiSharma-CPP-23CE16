#include<iostream>
using namespace std;

class SumNat{
    int n, sum;
    
public:
    SumNat() {
        cout << "Enter the value of n: ";
        cin >> n;
        sum = n * (n + 1) / 2;
    }
    
    void display() {
        cout << "Sum of first " << n << " natural numbers is: " << sum << endl;
    }
};

int main() {
    SumNat obj;
    obj.display();
    return 0;
}
