#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    string word = "";
    int len = s.size();
    stack<string>st;
    int i = 0 ;
    while(i < len){
        char each = s[i];
        if(each == ' '){
                if(word.length() > 0){
                    st.push(word);
                    word.clear();
            }
        }
        else{
            word+=each;
        }
        i++;
    }
        if(word.length() > 0 )          //last word push nahi hoga agar word ke baad space aata hai to  to usko seprate push kar rahe hai  
            st.push(word);

        string res = "";
        while(!st.empty()) {
            res += st.top();
            st.pop();
            res += ' ';
        }

        res.pop_back(); //one character at last will be removed because space concatinate ho gaya hai above se 
        return res;
}
int main(){
    string s = " name kumar prashant    ";
    cout<<'&';
cout<<reverse(s);
 cout<<'&';
return 0;
}