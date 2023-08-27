#include<iostream>
using namespace std;

class OperatorPostfixInfix{
	int num;
	public:
		OperatorPostfixInfix(int num = 0){
				this->num = num;
		}
		void display(){
			cout<<"number:"	<<num << endl;
		}
        // postfix operation
		OperatorPostfixInfix operator++(int){  //for differiatiating preinc and postinc
			OperatorPostfixInfix numNew;
            numNew.num = num++;
			return numNew;
		}
        // prefix operation
        OperatorPostfixInfix operator++(){
		OperatorPostfixInfix inc;
            inc.num = ++num;
			return inc;
		}	
};
int main(){
	cout<<"Before Postfix Operation: "<<endl;
    OperatorPostfixInfix obj(10);
    obj.display();

    
	cout<<"After Postfix Operation: "<<endl;
	OperatorPostfixInfix obj2 = obj++; // obj2 = obj.operator++()
	obj2.display();
    obj.display();

    cout<<"After Prefix Operation: "<<endl;
	OperatorPostfixInfix obj3 = ++obj; // obj3 = obj.operator++()
	obj3.display();
    obj.display();

	return 0;
}