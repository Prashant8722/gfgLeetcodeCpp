#include<bits/stdc++.h>
using namespace std;

void ceil_left(int arr[],int n)
{
    cout<<"-1";
    set<int>s;
    s.insert(arr[0]);
    for(int i = 1 ; i < n ; i++)
    {
        auto it = s.lower_bound(arr[i]);
        if(it != s.end())
        {
            cout<<*(it)<<" ";
        }
        else
            cout<<"-1" << " ";
        s.insert(arr[i]);
    }
    return;  
}
int main(){
int arr[] = {2 , 8 , 30 , 15  , 25 ,25 ,11,26};
ceil_left(arr,sizeof(arr)/sizeof(arr[0]));
return 0;
}
