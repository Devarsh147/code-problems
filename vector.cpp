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


#include <iostream>
using namespace std;

class vector{
    public:
        int size;
        int capacity;
        int* arr;

        vector(){
            size = 0;
            capacity = 1;
            arr = new int[1];
        }

        void add(int ele){
            if(size==capacity){
                capacity *= 2;
                int* arr2 = new int[capacity];
                for(int i=0;i<size;i++){
                    arr2[i]=arr[i];
                }
                arr = arr2;
            }
            arr[size++] = ele;
        }

        void print(){
            for(int i=0;i<size;i++){
                cout << arr[i] << " ";
            }
            cout << endl;
        }

        int get(int idx){
            if(size == 0){
                cout << "array is empty" << endl;
                return -1;
            }
            if(idx>=size||idx<0){
                cout << "invalid idx" << endl;
                return -1;
            }
            return arr[idx];
        }

        void remove(){
            if(size == 0){
                cout << "Empty array" << endl;
            }
            size--;
        }

};

int main() {
    vector v;
    cout << v.size << " " << v.capacity << endl;
    v.add(10);
    v.print();
    cout << v.size << " " << v.capacity << endl;
    
    v.add(15);
    v.print();
    cout << v.size << " " << v.capacity << endl;

    v.add(20);
    v.print();
    cout << v.size << " " << v.capacity << endl;

    cout << v.get(2);

    v.get(10);
    v.remove();
    v.print();

    return 0;
}
