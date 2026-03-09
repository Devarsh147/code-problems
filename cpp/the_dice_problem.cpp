//given dice range from 1 - 6
//task is to guess the number on the opposite face of the cude.
#include <iostream>
using namespace std;

int oppofthedice(int n) {
    int ans ;
    if(n==1) {
        ans = 6;
    }else if(n==2){
        ans = 5;
    }else if(n==3){
        ans = 4;
    }else if(n==4){
        ans = 3;
    }else if(n==5){
        ans = 2;
    }else{
        ans = 1;
    }return ans;

}


int main () {
    int n = 1;
    cout << oppofthedice(n);
    return 0;

}
// this mathod has the time complexity of O(1)

// for better approch we can you 2nd method
// by using sum of ywo sides

#include <iostream>
using namespace std;

int oppfaceofdice(int n){
    int ans = 7 - n;
    return ans;
} 

int main () {
    int n = 1;
    cout << oppfaceofdice(n);
    return 0;
}
 
// this method also has the time complexity of O(1) but it is more efficient than the first method.
