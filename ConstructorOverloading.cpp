#include<iostream>
using namespace std;

class SumValues {
public:
    SumValues(int a, int b) {
        cout << "Sum of two integers: " << (a + b) << endl;
    }
    
    SumValues(float a, float b) {
        cout << "Sum of two floats: " << (a + b) << endl;
    }
    
    SumValues(char a, char b) {
        cout << "Sum of two characters (ASCII values): " << (a + b) << endl;
    }
};

int main() {
    SumValues obj1(5, 10);
    SumValues obj2(3.5f, 4.5f);
    SumValues obj3('a', 'b');
    
    return 0;
}
