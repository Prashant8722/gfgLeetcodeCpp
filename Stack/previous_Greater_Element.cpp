#include<bits/stdc++.h>
using namespace std;
vector<int> smallerOnLeft(int *arr,int len)
{
    stack<int>s;
    vector<int>v;
    v.push_back(-1);
    s.push(arr[0]);
    for(int j  = 1 ; j < len ; j++)
        {
            while(!s.empty() && s.top() <= arr[j]){
                s.pop();
            }
            int greater = s.empty() ? -1 : s.top();
            v.push_back(greater);
            s.push(arr[j]);
        }
        return v;
}
int main(){
// int arr[] = {2, 13, 4, 15, 11 };
int arr[] = {20,30,10,5,15};
int length = sizeof(arr)/sizeof(arr[0]);
vector<int> res = smallerOnLeft(arr,length);
for(int val : res)
    {
        cout<<val <<" ";
    }
return 0;
}