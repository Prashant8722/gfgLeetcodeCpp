#include<bits/stdc++.h>
using namespace std;
vector<int> find(int arr[], int n , int x )
{
    int l = 0;
    int r = n-1;
    vector<int>res(2 , -1);
    int first;
    while( l <= r)
    {
       int m = l + (r - l)/2;
        if(arr[m] == x && m!= 0 && arr[m-1] < x )
         {
            res[0] = m; 
            first = m; 
            break;
        }
        else
            {
                if(arr[m] >= x)
                    r = m -1;
                else
                {
                    l = m+1;
                }
            }
    }
    for(int i = first+1 ; i < n ; i++)
    {
        if(arr[i] != x)
            {
                res[1] = i-1;
                break;
            }
    }
    return res;
}
int main(){
int arr[] =   { 1, 3, 5, 5, 5, 5, 67, 123, 125 };
int x = 5;
int size = sizeof(arr)/ sizeof(arr[0]);
vector<int>r = find(arr, size , x);
cout<<r[0] <<" "<< r[1];
return 0;
}