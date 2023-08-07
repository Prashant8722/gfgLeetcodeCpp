#include<bits/stdc++.h>
using namespace std;
/* char leftmostNonrepeating(string s)
{
    int len = s.length();
    int i = len-1 ; 
    int count[26] = {0};
    char res = '$';
    char prev = '$';
    while(i >=0)
    {
        count[s[i]-'a']++;
        if(count[s[i]-'a'] == 1)
            {
                prev = res;
                res = s[i];
            }
        i--;
    }
    // if(res == '$') return -1;
    else return res;
} */
//two traversal
int leftmostNonrepeating1(string s)
{
    int len = s.length(); 
    int count[26] = {0};
    int res = -1;
    for(int i  = 0 ; i < len ; i++)
        count[s[i] - 'a']++;
    
    for(int i  = 0 ; i < len ; i++)
        if(count[s[i] - 'a']==1)
            return i;
    return res;
}
//one traversal using space only those distinct alphabet in string 
char nonrepeatingCharacter(string S)
    {
       //Your code here
       unordered_map<char, int>mp;
       for(int i=0;i<=S.length();i++)
            mp[S[i]]++;
        for(int i=0; i < S.length();i++)
        {
            if(mp[S[i]] == 1)
                return(S[i]);
        }
         return '$';
    }  
int main(){
    string s = "geeksforgeeks";
    int ind = leftmostNonrepeating1(s);
    cout<<nonrepeatingCharacter(s);
    if(ind != -1)   cout<<s[ind];
return 0;
}