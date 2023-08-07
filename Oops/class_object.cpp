// #include<bits/stdc++.h>
// using namespace std;
// class Car{
//     int price;
//     int modalNumber;
//     string name;
    
//     public:
//         void setCar(int p , int m , string name){
//             price = p;
//             modalNumber = m;
//             this->name = name;
//         }
//         void getDetails(){
//             cout<<"price: "<<price << "modalNumber: " << modalNumber << "name:" << name;
//         }
// };
// int main(){
// Car car[6];
// cout<<"Size of car array object:"<<sizeof(car)<<endl;
// // string n;
// cout<<sizeof(n);
// car[5].setCar(1000000 , 113113 , "BMW23");
// car[5].getDetails();

// return 0;
// }

//method +++++++++++++++++
// string::size
#include <iostream>
#include <string>
using namespace std;
struct Student{
    // int a = 10;
    // char c; //
};
int main ()
{
    // Student s1;
    // s1.a = 100;
    // cout<<s1.a<<endl;
    cout<<sizeof(Student)<<endl;
  std::string str ("Test string");
  std::cout << "The size of str is " << str.size() << " bytes.\n";
  return 0;
}