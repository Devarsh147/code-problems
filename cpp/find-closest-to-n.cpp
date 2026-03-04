// find closest to n and divisible by m
// given two integers n and m (m != 0) , find the number closest to n and divisible by  m. if there is more than one such number , then output the one having maximum absolute value.
// absolute value means the distance of a number from zero on the number line.
#include <iostream>
#include <climits>
using namespace std;

int closestnumber (int n , int m) {
    int closest = 0;
    int min_diff = INT_MAX;
    for( int i = n - abs(m) ; i <= n + abs(m); ++ i) {
        if (i % m == 0 ) {
            int difference = abs(n -i);
            if (difference < min_diff) {
                min_diff = difference;
                closest = i;
            } else if (difference  == min_diff) {
                if (abs(i) > abs(closest)) {
                    closest = i;

                }
            }
            }
        
        }return closest;
} 

int main (){
    int n = 13, m = 4;
    cout << "the closest number to " << n << " and divisible by " << m << " is: " << closestnumber(n,m) << endl;
    return 0;
}



