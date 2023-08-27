#include<iostream>
using namespace std;
class Complex{
	int r;
	int i;
public:
	Complex(int real , int img){
		r = real;
		i = img;
	}
	void display(){
        cout<<"Real Part:"<< r << endl << "imaginary Part:" << i<<endl;
}
Complex add(Complex c){
	c.r = c.r + r;
	c.i = c.i + i;
	return c;
}
	
};
int main(){
	
    Complex c1(10 , 20);
	Complex c2(100, 200);
	Complex c3 = c1.add(c2);          // add two complex number
    c1.display();
    c2.display();
	c3.display();
}