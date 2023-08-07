#include<bits/stdc++.h>
using namespace std;
bool match(string s1 , string s2)
{
    if(s1.length() != s2.length())
        return false;
    return (s1+s1).find(s2) != string::npos;
}
int main(){
string check = "abaaa" , res = "baaaa";
cout<<match(check,res)<<endl;
//O(n^2)
string new1="";
if(check == res)
    {cout<<"1"<<endl;
    return 0;}
for(int i = 0 ; i < check.length()-1 ; i++)
    {
        for(int j = 0 ; j < check.length()-1 ; j++)
            new1 +=  check[j+1];
        new1+=check[0];
        cout<<new1<<endl;
        if(new1 == res)
            cout<<"Match found!"<<endl;
        check.clear();
        check = new1;
        new1.clear();
    }
return 0;
}