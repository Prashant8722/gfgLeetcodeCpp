#include<bits/stdc++.h>
using namespace std;
int leftmostRepeatedVisit(string s)
{
   const int CHAR = 256;
   int res = -1;
    bool visited[CHAR] = {false};
    for(int i =  s.length() -1 ; i>=0 ; i--)
        {
            if((visited[s[i]])) 
                res = i;
            else
                visited[s[i]] = true; 
        }
    return res;
}
int main(){
    string s = "mksforgeeks";
cout<<leftmostRepeatedVisit(s);
return 0;
}
