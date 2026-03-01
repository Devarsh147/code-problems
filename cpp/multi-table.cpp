// given a number n , we need to print table of n 
#include <iostream>
using namespace std;

void printtable(int n) {
    for (int i = 1; i <= 10; i++) {
        cout << n << " x " << i << " = " << n * i << endl;
    }
}

int main() {
    int n;
    cout << "Enter your number";
    cin >> n;
    printtable(n);
    return 0;
}