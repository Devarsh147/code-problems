// #include <iostream>
// #include <vector>
// using namespace std;
// int main () {
//     vector<int> vec;

//     cout << "size of vector: " << vec.size() << endl;
//     vec.push_back(10);
//     vec.push_back(20);
//     cout << "after push back size is: " << vec.size() << endl;

//     vec.pop_back();

//     for(int i : vec){
//         cout << i;
//     }

//     return 0;
// }

// #include <iostream>
// #include <vector>
// using namespace std;

// int main () {
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(1);
//     vec.push_back(2);

//     cout << vec.size() << endl;
//     cout << vec.capacity() << endl;
//     return 0;

// }

// #include <iostream>
// #include <vector>
// using namespace std;
// // single number problem
// int main () {
//     vector<int> vec = {4,1,2,1,2};
//     int ans = 0;
//     for(int val: vec){
//         ans = ans ^ val;
//     }
//     cout << ans;
//     return 0;
// }
