#include<bits/stdc++.h>
using namespace std;
int main(){
    string fname , lname;
    getline(cin,fname);
    getline(cin,lname);
    cout << fname <<endl;   //printing string
    //reverse string
    string rev = "kumar sandeep";
    reverse(rev.begin() , rev.end());
    cout << rev;
   /*  string last = lname;
    if(last == lname)
        cout<<"Well equal"<<endl;
    last = last + "singh";
    if(last != lname)
        cout<<"after modification not equal"<<endl;
    //traversing string
    for(int i = 0 ; i < fname.length() ; i++)
        cout<<fname[i];
    
    for(char x : fname)
        cout<<x;

    //compare string
    string s1 = "abc";
    string s2 = "bcd";
    if(s1 == s2)
        cout<<"equal"<<endl;
    else if (s1 < s2 )
        cout<<"lesser"<<endl;
    else
        cout<<"greater"<<endl;
    
    substring(start , how_MANY_CHARACTER), find() , + 
    cout << fname + lname <<endl;
    cout<<fname.substr(1,4)<<endl<<lname.find("mar");
 */
return 0;
}