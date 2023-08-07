#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
void count(int a[] , int n)
{
    unordered_map<int,int> m ;
     for (int i = 0; i < n; i++)
        m[a[i]]++;
    for(auto it = m.begin() ; it != m.end() ; it++)
    {
        cout<< it->first << ":" << it->second<<endl; 
    }
    return;
}
int main(){
int arr[] = {71, 6, 9, 71, 7 , 7 , 6 , 9 ,11 };
int sizes = sizeof(arr) / sizeof(arr[0]);
count(arr , sizes);
return 0;
}