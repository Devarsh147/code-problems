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



// 2nd method using recursion O(log10n) time and O(log10n) space.
#include <iostream>
using namespace std;

int reverseDigits1(int n , int rev = 0) {
    //base case
    if (n == 0) {
        return rev;
    }
    // recursion case
    int last = n % 10; // extract the last digit
    rev = rev * 10 + last; // add the last digit to the reverse number
    return reverseDigits1(n / 10, rev); // remove the last digit from the n.

}

int main () {
    int n = 4562;
    cout << reverseDigits1(n);
    return 0;
}
// output : 2654; with TC O(log10n) and SC O(log10n) due to recursion stack.
