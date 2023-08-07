#include<bits/stdc++.h>
using namespace std;
// bool compare(string s1 , string s2)
// {
//     return s1.length() > s2.length();
// }
int main(){
// int n;
// string s[100];

// cin>>n;
// cin.get();          //what does it mean?

// for(int i = 0 ; i < n ; i++)
//     {
//         getline(cin , s[i]);
//     }
// sort(s, s+n , compare);

// for(int i = 0 ; i < n ; i ++)
//     {
//         cout << s[i] <<endl;
//     }
//tokenization

// char s31[100] = "today is my day";

string str("10,20,30");
char *st = strtok((char*)str.c_str(), ",");

// char *ptr = strtok(s31 , " ");

cout<<"Tokenization Output"<<endl;

// cout<<ptr <<endl; 
// while(ptr != NULL)
//     {
//         ptr = strtok(NULL , " ");
//         cout<<ptr<<endl;
//     }

cout<<st <<endl; 
while(st != NULL)
    {
        st = strtok(NULL , ",");
        cout<<st<<endl;
    }

return 0;
}