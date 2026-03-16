//write a program to reverse digits to nummber

#include <iostream>
using namespace std;

int reverseDigits(int n) {
    int rev = 0;

    while(n > 0 ){
        int last = n % 10; // extract the last digit
        rev = rev * 10 + last; // add the last digit to the reverse number
        n = n / 10; // remove the last digit from the priginal number
    } return rev;
    
}

int main () {
    int n = 4562;
    cout << reverseDigits(n);
    return 0;
}
// output : 2654;

