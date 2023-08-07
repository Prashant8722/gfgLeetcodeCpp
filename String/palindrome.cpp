/* Description: A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric 
characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.
Given a string s, return true if it is a palindrome, or false otherwise.
125.valid Palindrome leetcode
 */
#include<bits/stdc++.h>
using namespace std;
    bool isPalindrome(string s) {
        // using transform() function and ::tolower in STL
        string sr = "";
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        for(int i=0;i<s.length();i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
            sr+=s[i];
    }
        int srlen = sr.length();
        int j = srlen;
        int i = 0;
        for(; (i < srlen/2) && (sr[i] == sr[--j]) ; i++);
                 if(i == srlen/2)
                    return true;
                else
                    return false;

    }
int main(){
    string s = "sandee pp eed , + = * NAS";
    cout<<isPalindrome(s);
return 0;
}