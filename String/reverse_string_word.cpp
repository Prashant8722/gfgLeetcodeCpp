/* reverse_string_word_single_seprated_without_leading_and_trailing_space
i/p =>"Sandeep kumar prashant"
o/p => "prashant kumar sandeep" */

/* logic: prashant kumar
        tnahsarp ramuk
        kumar  prashant */

#include<bits/stdc++.h>
using namespace std;
//reverse each word
void reverse(char *s , int l , int h)
{
    for( ; l <= h ; l++,h--)
        {
            swap(s[l] , s[h]);
        }
    return;
}
// reverse logic function 
void reverseword(char *s,int n )
{

    int start = 0;
    for(int end = 0; end < n  ; end++)
        {
            if(s[end] == ' '){
                reverse(s , start , end-1);             //reversing every word
                start = end + 1;
        }
      }
    reverse(s , start , n-1);   //reverse last word after this word no space that's why
    cout<<s<<endl;
    reverse(s,0,n-1);               //reversing whole string 
    cout<<s;
    return;
}
int main(){
    char s[] = "sandeep kumar prashant";
    cout<<s<<endl;
    int n = sizeof(s) / sizeof(s[0]) -1 ;
    reverseword(s ,n);
return 0;
}