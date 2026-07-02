//this is a one short code fast track for c++ programing language.

//basic synatx for c++ 

// #include <iostream>
// using namespace std;
// int main () {
//     cout << "hello world" << endl;
//     return 0;
// }

// output : "hello world"

// #include <iostream>
// using namespace std;
// int main() {
//     int x;
//     x = 5;
//     cout << x << endl;
//     int y;
//     y = 10;
//     cout << y << endl;
    
//     cout << x + y ;
//     return 0;


// }

// #include <iostream>
// using namespace std;

// int main () {
//     int a = 10;
//     int b = 20;

//     cout << a << " & " << b << endl;

//     a = a + 10 ;
//     cout << a << " & " << b << endl;

//     cout << a + b << endl;
//     cout << a - b << endl;
//     cout << a * b << endl;
//     return 0;

// }

// #include <iostream>
// using namespace std;

// int main () {
//     int x = 5;
//     x++;
//     cout << x << endl;
//     x--;
//     cout << x << endl;
//     return 0;
// }
 

// #include <iostream>
// using namespace std;
// int main () {
//     float r = 34;
//     float a = 3.14 * r * r;
//     cout  << " area of circle is " << a << endl;
//     return 0 ;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int a = 10;
//     int b = 20;
//     cout << (a > b) << endl;
//     cout << (a < b) << endl;
//     cout << (a == b) << endl;
//     cout << (a != b) << endl;
    
//     if (a > b) {
//         cout << "a is greater than b" << endl;
//     }else if (a < b) {
//         cout << "a is less than b" << endl;
//     }else{
//         cout << " ma chuda";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int x- = 5;
//     //this will give a compile time error because of the wrong syntax of decrement operetor .

// }

// #include <iostream>
// using namespace std;
// int main () {
//     int x;
//     cout << "enter a Number: "; 
//     cin >> x ;
//     cout << " sum of your nunber with 33 is: " << x + 33 << endl;
//     return 0 ;

// }

// #include <iostream>
// using namespace std;

// int main () {
//     int a, b;
//     cout << "enter a: " << endl;
//     cin >> a;
//     cout << "enter b: " << endl;
//     cin >> b;
//     cout << "sum = " << a + b << endl;
//     return 0;
// } 

// #include <iostream>
// using namespace std;
// int main () {
//     int a;
//     cin >> a;
//     if(a % 2 == 0 ) {
//         cout << " your nuber is even" << endl;
//     }else if(a % 2 != 0){
//         cout << "your number is odd" << endl;
//     }else {
//         cout << " enterd number is 0";
//     }
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int a;
//     cout << "Enter a positive number: ";
//     cin >> a;
//     if(a > 0 ) {
        
//         if ( a % 5 == 0) {
//             cout << "divisivle by 5" <<endl;
//         }else{
//             cout << "not diviable by 5" << endl;
//         }
//     }else{
//         cout << "plz enter a positive number" << endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int a;
//     cout << "Enter a number: ";
//     cin >> a;
//     if(a >= 0) {
//         cout << a;

//     }else {
//         cout << -a;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//         // take 3 positive integers input nad find greatest of 3 number
//         int a, b, c;
//         cout << "enter a: " << endl;
//         cin >> a;
//         cout << "enter b: " << endl;
//         cin >> b;
//         cout << "enter c: " << endl;
//         cin >> c;
//         if(a >  b && a > c) {
//             cout << "a is greatesrt" << endl;    
//         }else if ( b> a && b > c) {
//             cout << "b is greatest" <<  endl;
//         }else{
//             cout << "c is greatest" << endl;
//         }
//         return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     // ternary operator
//     int a, b ;
//     cout << "enter a: " << endl;
//     cin >> a;
//     cout << "enter b: " << endl;
//     cin >> b;
//     // expression 1? expression 2 : expression 3
//     // if the expression 1 is true then expression 2 will be executed otherwise expresseion 3 will be executed.
//     (a > b) ? cout << "a is greater than b" << endl : cout << "b is greater than a" << endl;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "enter a nummber: " << endl;
//     cin >> n;
//     (n % 2 == 0) ? cout << "even number " << endl : cout << "odd number" << endl;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main () {
//     int n1, n2;
//     char op;
//     cout << "enter n1: " << endl;
//     cin >> n1;
//     cout << "enter op ('+'-'/'*') " << endl;
//     cin >> op;
//     cout << "enter n2: " << endl;
//     cin >> n2;

//     // if(op == '+') cout << n1+n2;
//     // if(op == '-') cout << n1-n2;
//     // if(op == '*') cout << n1*n2;
//     // if(op == '/') cout << n1/n2;

//     switch(op) {
//         case '+':
//             cout << n1 + n2;
//             break;
//         case '-':
//             cout << n1 - n2;
//             break;
//         case '*':
//             cout << n1 * n2;
//             break;
//         case '/':
//             cout << n1/n2;
//             break;
//         default:
//             cout << "invalid operator" << endl;
//     }
//     return 0;

// }


// loop
//for loop 

// #include <iostream>
// using namespace std;
// int main  () {
  
//     for ( int i  = 1 ; i <= 100 ; i++) {
//         if(i % 2 == 0){
//             cout << i << endl;
//         }
//     }
      
//     return 0;
// }


// #include <iostream>
// using namespace std;
// // int main () {
// //     int n;
// //     cout << "enter a number: " << endl;
// //     cin >> n;
// //     for ( int i = 1; i <= 10; i++) {
// //         cout << n << "*" << i << " = " << n*i << endl;
// //     }
// //     return 0;
// // }

// //display  this ap = 1,3,5,7,9.. upto n terms

// // methoid 1: nth rem formula

// // #include <iostream>
// // using namespace std;

// // int main () {
// //     int n ;
// //     cout << "enter a number: " << endl;
// //     cin >> n;

// //     for ( int i = 1; i < 2*n-1; i+=2){
// //         cout << i << endl;
// //     }
// //     return 0;
// // }

// // check if number is composite or prime 

// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << "enter a number: " << endl;
//     cin >> n;
//     if (n <= 1) {
//         cout << "number is neither prime nor composite" << endl;
//     }else {
//         bool isprime = true;
//         for ( int i = 2; i <= n/2; i++) {
//             if ( n % i == 0) {
//                 isprime = false;
//                 break;

//             }
//         }
//         if (isprime) {
//             cout << "number is prime" << endl;
//         }else {
//             cout << " number is composite" << endl;
//         }
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main () {
//     // use countinue statement to skip the even number;
//     for (int i = 1; i <= 100; i++) {
//         if( i % 2 == 0) {
//             continue;
//         }
//         cout << i << endl;

//     }
//     return 0;

// }/

// lets start with  the while loop

// #include <iostream>
// // using namespace std;
// // int main () {
  
//     for (int i = 1 ; i <= 10; i++){
//         if(i % 2 == 0){
//             cout << "*" << " ";
//         }
//         if(i % 2 != 0){ 
//             cout << "-" ;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main () {
//     // write a program  to count digits of a gvien number.
//     int n ;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     int count = 0;
//     while(n>0){
//         n = n/10;
//         count++;
//     }
//     cout << count;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// //WAP to print sum of digits of given number.
// int main () {
//     int n ;
//     cout << "enter a number: " << endl;
//     cin >> n;

//     int sum = 0 ;
//     while(n>0) {
//         int digit = n % 10;
//         sum += digit;
//         n = n / 10;
//     }

//     cout << "sum of digits is : " << sum << endl;
//     return 0;
// // }


// #include <iostream>
// using namespace std;
// //wAP to print product of digits of given number.
// int main() {
// int n = 123;
// int product = 1;
// while(n>0) {
//     int digit = n % 10;
//     product *=digit;
//     n = n/10;

// }
// cout << product << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     // WAP to print sum of all the even digits of a given number.
//     int n ;
//     cout << " enter a number: " << endl;
//     cin >> n;
//     int sum = 0;
//     while(n>0){
//         int ls = n % 10;
//         if(ls % 2 == 0){
//             sum += ls;
//         }
//         n = n/10;
        
//      }
//     cout << sum;
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main () {
//     int n = 1234;
//     int reverse = 0;
//     while(n>0){
//         int digit = n % 10;
//         reverse = reverse * 10 + digit;
//         n = n/10;
//     }
//     cout << reverse << endl;
//     return 0;
// }



// NOW we will learn about pattern printing in c++.


// #include <iostream>
// using namespace std;
// int main () {
//     int n =3;

//     for (int i = 1; i<=n; i ++){
//         cout << "****" << endl;

//     }

//     return 0;

// }

// #include <iostream>
// using namespace std;
// int main () {
//     int n;
//     cout << " enter a n: " ;
//     cin >> n;
    
//     for ( int i = 1; i <= n ; i++) {
//           for(int j =1; j <= n; j++) {
//             cout << (char)(j + 96);
//           }
//           cout << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//    int n, m;
//   cout << "ENTER  NUMBER N: " ;
//   cin >> n;

//   cout << "ENTER NUMBER M: " ;
//   cin >> m;

//   for(int i=1;i<=n;i++){
//      for(int j = 1; j<=m;j++) {
//       cout << "*" ;
//      }
//      cout << endl;
//   }

//   return 0;
// }


// #include <iostream>
// using namespace std;
// int main (){
//    int n , m ;
//    cout << "enter n: ";
//    cin >> n;
//    cout << "enter m: ";
//    cin >> m;

//    for(int i=1; i<=n; i++){
//       for(int j = 1; j<=m; j++){
//          cout << "*";
//       }
//       cout << endl;
//    }
//    return 0;
// }


// lets make sommetine new 

// #include <iostream>
// using namespace std;

// int main () {
//    string name, ad;
//    char choice;
//    int age;
//    cout << "Hi! dear, how can i help yiu" << endl;
//    cout << "choice one: \n 1: Need information. \n 2: Add ditail. \n 3: exit. " << endl;
//    cin >> choice;
   
//    switch (choice) {
//       case '1': 
//                cout << "we are the trusted brand of 2k26 where you can get the information of all the thing requied as per you: " << endl;
//                break;
//       case '2':
//                cout << "you can add your deatils here: " << endl;
//                cout << "Name: ";
//                cin >> name;
//                cout << "\nAge: ";
//                cin >> age;
//                cout << "\nAdress: ";
//                cin >> ad;  
               
//                cout << "You are : "<< name  << " age" << age << " from: " << ad << endl;
//                break; 
      
//       case '3': 
//                cout << " nikal lawde >>---oo" ;
//    }

//    return 0;
   
// }


// #include <iostream>
// using namespace std;
// int main () {
//    int n ;
//    cout << "enter n: ";
//    cin >> n;

//    for(int i=1; i<=n; i++){
//       for(int j=1; j<=i; j++){
//          cout << j  << " ";
//       }
//       cout << endl;
//    }
//    return 0;
// }


// #include <iostream>
// using namespace std;
// int main (){
//    int n = 5;
//    for(int i = 1; i <= n; i++){
//       for(int j = 1; j <= i; j++){
//          if( i % 2 == 0){
//             cout << (char)(j + 96);
//          }else{
//             cout << j;
//          }
//       }
//       cout << endl;
//    }

//    return 0;
// }

//output: 
// 1
// ab
// 123
// abcd
// 12345

// #include <iostream>
// using namespace std;
// int main (){
//    int n = 4 ;
//    for(int i = 1; i <= n; i++){
//       for(int j = 1; j <= n-i+1; j++){
//          cout << i ;
//       }
//       cout << endl;
//    }//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 4;
//    for(int i = 1; i <= n; i++){
//       for(int j = 1; j <= 2*i-1;j++){
//       }
//    }
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 5;
//    int a = 1;
//    for (int i = 1; i <= n; i++){
//       for (int j = 1; j<=i;j++){
//          cout << a << " ";
//          a++;
//          //or cout << a++ << ""
//       }
//       cout << endl;

//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 4;
//    int a = 1;
//    for(int i=1; i<=n; i++){
//       for(int j=1; j<=i;j++){
//          if((i+j) % 2 == 0){
//             cout << "1";
//          }else{
//             cout << "0";
//          }
//       }
//       cout << endl;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 5;
//    int mid = n/2 + 1;
//    for(int i = 1; i <= n; i++){
//       for(int j=1; j<=n; j++){
//          if(i==mid || j==mid){
//             cout << "* "; 
//          }else{
//             cout << "  ";
//          }
//       }
//       cout << endl;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 4;
//    int m = 6;
   
//    for(int i = 1; i <= n; i++){
//       for(int j = 1; j <= m; j++){
//          if (i == 1|| i == n){
//          cout << "* ";}else if(j == 1 || j==m){
//             cout << "* ";
//          }else{cout << "  ";}
//       }
//       cout << endl;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 4;
//    for(int i = 1; i<=n;i++){
//       for(int j = 1; j <= n-i+1; j++){
//          cout << "  ";
//       }
//       for(int j = 1; j <= i; j++){
//          cout << j << " ";
//       }
//       cout << endl;
//    }
//    return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 4;

//    for(int i = 1; i <= n; i++){
//       for (int j = 1; j<=n-i+1;j++){
//          cout << " ";
//       }
//       for(int j = 1; j <= i; j++){
//          cout << "*";
//       }
//       for(int j = 1; j <= i-1; j++){
//          cout << "*";
//       }

//       cout << endl;
//    }
//    return 0;
// }
//     *
//    ***
//   *****
//  *******

// #include <iostream>
// using namespace std;
// int main () {
//    int n = 4;

//    for(int i=1; i<=n;i++){
//       for(int j=1 ; j<=n-i+1;j++){
//          cout << " ";
//       } 
//       for(int j = 1; j<=i; j++){
//          cout << j;
//       }
//       for(int j=1; j<=i-1;j++){
//          cout <<j;
//       }
//       cout << endl;
//    }
//    return 0;
// }



// #include <iostream>
// using namespace std;

// // lets learn about functions today.
// void greet(){
//     cout << "HI!" << endl;
//     cout << "CAN I KNOW YOUR NAME: " << endl;
// }

// void welcome(string name){
//     cout << "WELCOME " << name << endl;
// }

// int main () {
//     string name;
//     greet();
//     cout << "ENTER YOUR NAME: " ;
//     cin >> name;
//     welcome(name);
//     return 0;
// }


// #include <iostream>
// using namespace std;

// void greet() {
//     cout << "WE WELCOME YOU TO TECH WORLD" << endl;
//     cout << "I'M ELLI , YOUR SARTHI" << endl;
// }

// void info() {
//     string name;
//     int age;
//     int number;
//     cout << "YOU CAN SUBMIT YOUR INFO HERE: " << endl;
//     cout << "ENTER YOUR NAME: ";
//     cin >> name;
//     cout << "ENTER YOUR AGE: ";
//     cin >> age;
//     cout << "MOBILE NUMBER: ";
//     cin >> number;
// }

// void type_of_info() {
//     string batch;
//     cout << "DO YOU NEED INFO RALTED TO NEET OR JEE: ";
//     cin >> batch;
//     if(batch == "NEET"){
//         cout << "medical berojgar";
//     }else if (batch == "JEE"){
//         cout <<"berojgar";
//     }else{
//         cout << "laawdya barabar li";
//     }
// }

// int main () {
//     greet();
//     info();
//     type_of_info();
//     return 0;
// }


// library funtion 


// #include <iostream>
// #include <cmath>
// using namespace std;

// int main () {
//     cout << sqrt(40) << endl;
//     cout << cbrt(40) << endl;
//     cout << pow(2,3) << endl;
//     cout << min(2,4) << endl;
//     cout << max(2,5) << endl;
//     return 0; 
// }

// #include <iostream>
// using namespace std;

// int fact (int x){
//     int f = 1;
//     for(int i = 1; i <= x; i++){
//         f = f * i;
//     }
//     return f;
    
// }

// int main () {
//     int n,r;
//     cout << "enter n: ";
//     cin >> n;
//     cout << "factorial of the number is: " << fact(n) << endl;
//     cout << "now enter r";
//     cin >> r;
//     cout << "your value are n = " << n << " r = " << r << endl;
//     int a = fact(n);
//     int b = fact(r);
//     int c = fact(n-r);
//     cout << "nCr = " << a/(b*c) << endl;
//     return 0;
// }


// pascal triangle
// #include <iostream>
// using namespace std;

// int fact(int x){
//     int f = 1;
//     for(int i = 1; i <= x; i++){
//         f = f * i;
//     }
//     return f;
// }

// int ncr(int n ,int r){
//     return fact(n)/(fact(r)*fact(n-r));
// }

// int main () {
//     int n;
//     cout << "enter n: ";
//     cin >> n;
//     for(int i = 0; i < n; i++){
//         for(int j = 0;j <= i; j++){
//             cout << ncr(i,j) << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }


//pasacal triangle 

#include <iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 1; i<= x; i++){
        f= f * i;
    }
    return f;
}

int ncr(int n , int r){
    return fact(n)/(fact(r)*fact(n-r));
}

int main () {
    int n  = 5;
    for(int i = 0; i <= n ; i++){
        for(int j = 0; j<=i; j++ ){
            cout << ncr(i,j) << " ";
        }
        cout << endl;
    }
    return 0;
}