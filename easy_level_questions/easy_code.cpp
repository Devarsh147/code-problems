// //1 :
// // write a program in cpp to take integers as input and print their sum.;
// #include <iostream>
// using namespace std;

// int main () {
//     int a,b;
//     cout << "Enter a number a: ";
//     cin >> a;

//     cout << endl;
//     cout << "Enter a number b: ";
//     cin >> b;
//     cout  << "sum of two number is: " << a + b;
//     return 0;
// }

// // write a program to check whether a given number is even or odd.

// #include <iostream>
// using namespace std;

// int main () {
//     int n = 7;
//     if(n % 2 == 0){
//         cout << "number: " << n << " is even." << endl;
//     }else{
//         cout << "odd number";
//     }

//     return 0 ;
// }


// //write a program to print the multiplication table of number entered by the user.

// #include <iostream>
// using namespace std;

// int main () {
//     int n;
//     cout << "enter a number: " ;
//     cin >> n;
    
//     for(int i=1;i<11;i++){
//         cout << n << "*" << i << "=" << n*i << endl; 
//     }

//     return 0;
// }

// //write a program to find the largest elemt in an array of 5 integers entered by the user.
// #include <iostream>
// using namespace std;

// int main () {
//     int arr[5];
//     cout << "enter 5 numbers: " << endl;
//     for(int i=0;i<5;i++){
//         cin >> arr[i];
//     }

//     int largest = arr[0];
//     for(int i = 1; i<5;i++){
//         if(arr[i] > largest){
//             largest = arr[i];
//         }
//     }
//     cout << "largest number is: " << largest;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main (){
//     int n ;
//     cout << "enter a number: ";
//     cin >> n;

//     cout << "factorial of " << n << " is: ";
//     int fact = 1;
//     for(int i = 1; i <= n; i++){
//         fact = fact * i;
//     }
//     cout << fact;
//     return 0;
// }

// // write a program to reverse an array .
// #include <iostream>
// using namespace std;

// int main () {
//    int arr[5] = {1,2,3,4,5};
   
//    for(int i=4; i >= 0; i--){
//         cout << arr[i] << " ";
//    }
//    cout << endl;
//    return 0;
// }

// // write a program to count vowels in a string.
// #include <iostream>
// using namespace std;

// int main () {
//     string str;
//     cout << "enter a string: ";
//     cin >> str;
//     int count = 0;
//     for(int i=0; i <str.length(); i++){
//         if(str[i] =='a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
//             count++;
//         }
//     }
//     cout << "number of vowels in the string is: " << count;
//     return 0;
// }


// // write a program to reverse an array.
// #include <iostream>
// using namespace std;

// int main () {
//     int arr[5]={1,2,3,4,5};

//     for(int i=4;i>=0;i--){
//         cout << arr[i] << " " ;
//     }
//     return 0;
// }
// 

//write a program to count vowels in string.

// #include <iostream>
// using namespace std;
// int main () {
//    string str;
//    cout << "Enter s string: " ;
//    cin >> str;
   
//    int count=0;
//    for(int i=0; i<=str.length();i++){
//         if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
//             count++;
//         } 

//     }
//     cout << "the total vowels in this are: " << count ;
//     return 0;
// }

