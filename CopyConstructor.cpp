#include<iostream>
using namespace std;

class ArraySum {
    int* arr;
    int size;
    int sum;

public:
    ArraySum(int arr[], int size) {
        this->size = size;
        this->arr = new int[size];
        for (int i = 0; i < size; i++) {
            this->arr[i] = arr[i];
        }
        sum = 0;
        for (int i = 0; i < size; i++) {
            if (arr[i] > 0) sum += arr[i];
        }
    }
    
    ArraySum(const ArraySum &obj) {
        size = obj.size;
        arr = new int[size];
        for (int i = 0; i < size; i++) {
            arr[i] = obj.arr[i];
        }
        sum = obj.sum;
    }
    
    void display() {
        cout << "Sum of all positive numbers: " << sum << endl;
    }
    
    ~ArraySum() {
        delete[] arr;
    }
};

int main() {
    int size;
    cout << "Enter size of array: ";
    cin >> size;
    int arr[size];
    
    cout << "Enter elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    ArraySum obj1(arr, size);
    ArraySum obj2 = obj1;
    obj2.display();
    
    return 0;
}
