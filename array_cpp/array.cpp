// starting array in cpp .
//#include <iostream>
// using namespace std;
// int main () {
//     int arr[5] = {1,2,3,4,5};
//     for(int i = 0; i <= 4; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
    
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int arr[] = {1,2,3,4,5};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int count = 0;
//     for(int i=0;i<n;i++){
//         if(arr[i]%2==0){
//             count++;
//         }
//         cout << arr[i] << " ";
        
//     }
//     cout << "Count of even numbers " << count;
//     return 0;
// }


// #include <iostream>
// using namespace std;
// int main () {
//     //calculate the product of all th element in the given array;
//     int arr[] ={1,2,3,4,5,6};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     int product = 1;
//     for(int i=0;i<n;i++){
//         product= product*arr[i];
//         cout << arr[i] << " " << endl;
//     }
//     cout << "product of all the elements in the array is: " << product;
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main () {
//     int arr[] = {1,2,7,732,63,32,42,12,43};
//     int n = sizeof(arr)/4;
//     int x;
//     cout << "Enter a value x: ";
//     cin >> x;
//     for(int i=0;i<n;i++){
//         if(arr[i] == x){
//             cout << "found on the index value: " << i;}
//     }
//     return 0;
// }

// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {21,43,11,44,24,55,12,53};
//     int x = INT_MIN;
//     int n = sizeof(arr)/4;
//     for(int i=0; i<n;i++){
//         x = max(x,arr[i]);
//     }
//     cout << x;
//     return 0;
// }



// #include <iostream>
// #include <climits>
// using namespace std;

// int main () {
//     int arr[] = {21,43,11,44,24,55,12,53};
//     int x = INT_MIN;
//     int smx = INT_MIN;
//     int n = sizeof(arr)/4;
//     for(int i=0; i<n;i++){
//         x = max(x,arr[i]);
//         if(arr[i] > smx && arr[i] < x){
//             smx = arr[i];
//         }
    
//     }
//     cout << x << endl;
//     cout << smx;
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v1;
    vector<int> v2(3,4);
    vector<int> v3={1,2,3,4,5};

    v1.push_back(10);
    v1.push_back(4);
    cout << v1[0];
    cout << v1.size() << endl;
    v1.insert(v1.begin(), 2);
    v1.erase(v1.begin());
    cout << v1[0] << endl;
    return 0;
}

