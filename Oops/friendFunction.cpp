#include<iostream>
using namespace std;
class Complex{
	int real;
	int imaginary;
public:
	Complex(int real ,int imaginary){
			this->real = real;
			this->imaginary = imaginary;
	}
	void display(){
        cout<<"Complex number is:"<< real << "+" << imaginary <<"i"<<endl;
}
friend void add(Complex , Complex);
};
void add(Complex c1 , Complex c2){
	cout<<"Sum of imaginary Number:"<<c1.real + c2.real <<"+i"<<c1.imaginary + c2.imaginary<<endl;
};
int main(){
	Complex c1(10 , 20);
	c1.display();
	Complex c2(30 , 40);
	c2.display();
	
	add(c1 ,c2); 
}