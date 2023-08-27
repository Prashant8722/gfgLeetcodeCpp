#include<bits/stdc++.h>
using namespace std;
class Player{
    static int count;
public:
    Player(){
        count++;
        cout<<"Inside Constructor"<<count<<endl;
        
    }
    ~Player(){
        cout<<"Inside Destructor"<<count<<endl;
        count--;
    }
   static int getCount(){
        return count;
    }
};

int Player :: count = 0;
int main(){
Player p1 , p2;
cout <<Player :: getCount()<<endl; 
return 0;
}