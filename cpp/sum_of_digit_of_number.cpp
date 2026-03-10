// Given a nummber n , find the sum of its digiys.

// 1st method O(log10n) time and O(1) space complexity

// we can su the digits of the number by repeatedly extracting the last digits 
// and adding it to the sum and then remoiving the last digit by dividing the n number by 10;

#include <iostream>
using namespace std;

int sumofdigits(int n) {
    int sum = 0;

    while( n != 0) {
        int last = n % 10; // extract the last digit
        sum += last; // add the last digits to the sum
        n = n / 10;
    } return sum;
}

int main () {
    int n = 1234;
    cout << sumofdigits(n);
    return 0;
}