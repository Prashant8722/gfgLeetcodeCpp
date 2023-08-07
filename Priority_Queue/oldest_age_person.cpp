#include<bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    
    Person(string name ,int age){
        this->name = name;
        this->age = age;
    }
};

class CompareAge{
    public:
    bool operator()(Person p1 , Person p2){
        return p1.age < p2.age;         
    }
};


int main(){

int n ;
cin>>n; // input number of person

priority_queue<Person,vector<Person>,CompareAge>pq;

while(n>0){
    string name;
    int age;
    cin >> name >> age;
    Person p(name , age);
    pq.push(p);
    n--;
}

int k;  //topmost k aged person;
cin>>k;

cout << "Resultant List:"<<endl;
for(int i = 0 ; i < k ; i++){
    Person p = pq.top();
    cout<<"[" << p.name << "," << p.age << "]"<<endl; 
    pq.pop();
}

return 0;
}