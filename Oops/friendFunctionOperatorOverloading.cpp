#include<iostream>
using namespace std;
class Complex{
	int r;
	int i;
friend Complex operator-(Complex);
public:
	Complex(int real= 0  , int img = 0){
		r = real;
		i = img;
	}
	void display(){
        cout<<"Real Part:"<< r << endl;
				cout << "imaginary Part:" << i<<endl;
}	
};
Complex operator-(Complex c){
	Complex temp(-c.r , -c.i);
	//temp.r = -c.r;
	//temp.i = -c.i;
	return temp;
}

int main(){
	
    Complex c1(10 , 20);
	Complex c2 = -c1;          // negate two complex number c2 = operator-(c1)
    c1.display();
    c2.display();
}