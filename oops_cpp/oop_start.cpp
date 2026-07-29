// so we are starting the cpp in oops

//user defined data type 
// #include <iostream>
// using namespace std;

// class Student{
// public:
//     string name;
//     int roll;
//     float gpa;
// };

// int main (){
//     Student s;
//     s.name = "dev";
//     s.roll= 16;
//     s.gpa = 7.2;

//     cout <<s.name << " " << s.roll << " " << s.gpa;
//     return 0;

// }

// #include <iostream>
// using namespace std;

// class Animal{
//     public:
//    string aquatic;
//    int number;
// };

// int main (){
//     Animal A;
//     cout << "enter a animal: ";
//     cin >> A.aquatic;

//     cout << "You have entered " << A.aquatic;
//     return 0;

// }

// #include <iostream>
// using namespace std;

// class Car{
// public:
//     string name;
//     int price;
//     int seats;
//     string type;
// };

// void print(Car c){
//     cout << c.name << " " << c.price << " " << c.seats << " " << c.type << " " <<endl;
// }

// void change(Car& c){
//     c.name = "ford";
// }

// int main () {
//     Car c1;
//     c1.name = "honda city";
//     c1.price = 150000;
//     c1.seats = 5;
//     c1.type = "Petrol";

//     print(c1);
//     change(c1);
//     print(c1);

//     Car c2;
//     c2.name = "NEXA";
//     c2.price = 250000;
//     c2.seats = 4;
//     c2.type = "Disel";
    
//     Car c3;
//     c3.name = "Tata curve";
//     c3.price = 180000;
//     c3.seats = 6;
//     c3.type = "EV";
    
//     Car c4;
//     c4.name = "Maruti Suzuki";
//     c4.price = 90000;
//     c4.seats = 5;
//     c4.type = "Petrol";

//     print(c1);
//     print(c2);
//     print(c3);
//     print(c4);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// class student{
//     public:
//     string name;
//     int roll;
//     float marks;

//     student(string s, int r, float m){
//         name = s;
//         roll = r;
//         marks = m;
//     }
// };

// int main () {
//     student s1("dev",16,7.8);

//     cout << s1.name << " " << s1.roll << " " << s1.marks;
//     return 0;
// }


// // #include <iostream>
// using namespace std;


// class cricketer{
//     public:
//     string name;
//     int runs;

//     cricketer(string n , int r){
//         name = n;
//         runs = r;
//     }
// };

// void print(cricketer c){
//     cout << c.name << " " << c.runs << endl;
// }

// int main () {
//     cricketer c1("virat",15000);
//     cricketer c2("rohit",20000);


//     print(c1);
//     print(c2);


//     return 0;
// }

// #include <iostream>
// using namespace std;

// class cric{
//     public:
//         string name;
//         int runs;

//         cric(string name, int runs){                                                   
//             this->name = name;
//             this->runs = runs;   
            
//         }
// };

// int main () {
//     cric c1("virat kohli",23988);
//     cric c2("dev", 427727);

//     cout << c1.name << " " << c1.runs << endl;
//     cout << c2.name << " " << c2.runs << endl;
// } 


// object pointer 

#include <iostream>
using namespace std;

class cricketer {
    public:
        string name;
        int runs;
        float avg;
    
    cricketer(string name,int runs,float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

    int matches (){
        return runs/avg;
    }

    void print(cricketer c){
        cout << name << " " << runs << " " << avg;
    }

    void change(cricketer* c){
        c->avg = 67;
    }
};





int main () {
    cricketer c1("dev",5444,45.4);

    
        return 0;
}