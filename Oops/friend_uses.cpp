#include<bits/stdc++.h>
using namespace std;
class Car{
    int price;
    int modalNumber;
    string name;
    
    public:
   
    friend class CarProperties;
};
class CarProperties{
    public:
         void setCar(Car p , int m , string name){
            price = p;
            modalNumber = m;
            this->name = name;
        }

        void getDetails(){
            cout<<"c.price: "<<Car::price << endl;
        }
};
int main(){
    CarProperties c;
    c.setCar(100 ,100000 , "ODDI");
    }