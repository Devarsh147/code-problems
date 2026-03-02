// given two number a and b , the atsk is to swap them .
#include <iostream>
using namespace std;

void swap(int a, int b) {
    int temp;
    temp = a;
    a =b;
    b = temp;
    cout << "after swapping: a = " << a << endl;
    cout << "after swapping: b = " << b << endl;
}

int main () {
    int a = 5, b = 10;
    cout << "before swapping: a = " << a << endl;
    cout << "before swapping: b = " << b << endl;
    swap(a,b);
    return 0;
}
