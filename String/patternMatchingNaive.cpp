#include<bits/stdc++.h>
using namespace std;
vector<int> patternMatch(string text , string pattern)
{
    vector<int>res;
    int tlen = text.length();
    int plen = pattern.length();
    for(int i = 0; i <= tlen-plen ; i++)
    {
        int j;
        for(j = 0 ; j < plen ; j++)
            if(pattern[j] != text[i+j])
                break;
        if(j == plen)
            res.push_back(i);
    }
    return res;
}
//if patern is combination of different character 
vector<int> patternMatchDist(string text , string pattern)
{
    vector<int>res;
    int tlen = text.length();
    int plen = pattern.length();
    int i;
    for(i = 0; i <= tlen-plen ;)
    {
        int j;
        for(j = 0 ; j < plen ; j=j+1)
            if(pattern[j] != text[i+j])
                break;
        if(j == plen)
            res.push_back(i);
        if(j==0)
            i++;
        else
            i=i+j;
    }
    return res;
}


int main(){
string text = "sandeeepsandyprashantkumar";
string pattern = "and";
vector<int>result = patternMatch(text,pattern);
for(int s : result)
    cout<< s << " ";
return 0;
}