#include <bits/stdc++.h>
using namespace std;
// class exam{
//     int arr[10];
//     };

// class e1 : public exam{
//     };

// class e2 : public exam{
//     };
// class derived : public e1 , public e2{};
// int main(){
// cout<<sizeof(derived)<<endl;        //80 = 10*4
// cout<<sizeof(int)<<endl;            //4
// return 0;
// }
class exam{
    public:
    virtual void show() = 0;

};

int main(){
/*because the following virtual functions are pure within 'exam':
 class exam{
       ^~~~
sizeofclass.cpp:20:18: note:    virtual void exam::show()        
     virtual void show() = 0;
     */
// exam e;     // cannot declare variable 'e' to be of abstract type 'exam' exam e;
exam * ep;          // for this no errot;
return 0;
}