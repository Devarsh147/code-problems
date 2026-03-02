//program for sum of squares of 1st n natural numbers;
#include <iostream>
using namespace std;

void squaressum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + i*i;
    }
    cout << sum << endl;
}

int main () {
    squaressum(8);
    return 0;
}