#include<bits/stdc++.h>
using namespace std;
int prefix_Eval(string st)
{
    stack<int>s;
    for(int i = st.size()-1 ;i>=0; i--)
    {
        char ch = st[i];
        int c;
        if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
            {
            int a = s.top();
            s.pop();
            int b = s.top();
            s.pop();
            if(ch == '+')
                c = a+b;
            else if(ch == '-')
                c = a-b;
            else if(ch == '*')
                c = a*b;
            else
                c = a/b;
            s.push(c);
            }
        else
        {
            s.push(int(ch) - 48);
        }
    }
    return s.top();
}
int main(){
string s = "-/*+37452";
int res = prefix_Eval(s);
cout<<res;
return 0;
}