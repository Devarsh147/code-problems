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

// 2nd method using Recursion O(log10n) time and O(log10n) space
// we can use recursion to finf the sum of digits of digits. the idea is to extract the last add it to the sum of digits of the remaing number and repeat. 


#include <iostream>
using namespace std;

int sumofdigits(int n) {
    // base case
    if (n == 0){
        return 0;
    }
    // recursive case
    return (n % 10) + sumofdigits(n / 10);
}
int main () {
    cout << sumofdigits(12345);
    return 0;
}

// how it works:
// 1st : n = 12345, n % 10 = 5, 12345 / 10 = 1234, then sumofdigits(1234) is called
// 2nd : n = 1234, n % 10 = 4, 1234 / 10 = 123, then sumofdigits(123) is called
// 3rd : n = 123, n % 10 = 3,
// 123 / 10 = 12, then sumofdigits(12) is called
// 4th : n = 12, n % 10 = 2,
// 12 / 10 = 1, then sumofdigits(1) is called
// 5th : n = 1, n % 10 = 1,
// 1 / 10 = 0, then sumofdigits(0) is called
// 6th : n = 0, base case is reached, return 0
// then the sum is calculated as follows:
// sumofdigits(1) = 1 + sumofdigits(0) = 1 + 0 = 1
// sumofdigits(12) = 2 + sumofdigits(1) = 2 + 1 = 3
// sumofdigits(123) = 3 + sumofdigits(12) = 3 + 3 = 6
// sumofdigits(1234) = 4 + sumofdigits(123) = 4 + 6 = 10
// sumofdigits(12345) = 5 + sumofdigits(1234) = 5 + 10 = 15 


