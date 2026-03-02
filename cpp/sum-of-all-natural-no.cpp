//program for sum of n natural nummbers;
#include <iostream>
using namespace std;

void sumofnaturalnum(int n){
    int sum = 0;
    for (int i = 1 ; i <= n; i++){
        
        sum = sum + i;
    }
    cout << sum << endl;

}

int main () {
    sumofnaturalnum(10);
    return 0;
}