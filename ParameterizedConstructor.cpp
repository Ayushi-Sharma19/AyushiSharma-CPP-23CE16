#include<iostream>
using namespace std;

class SwapNumbers {
    int a, b;

public:
    SwapNumbers(int x, int y) {
        a = x;
        b = y;
    }
    
    void swap() {
        int temp = a;
        a = b;
        b = temp;
    }
    
    void display() {
        cout << "After swapping: a = " << a << ", b = " << b << endl;
    }
};

int main() {
    int x, y;
    cout << "Enter two numbers: "<<endl;
    cin >> x >> y;
    
    SwapNumbers obj(x, y);
    obj.swap();
    obj.display();
    
    return 0;
}
