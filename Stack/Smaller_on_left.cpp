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
            while(!s.empty() && s.top() >= arr[j]){
                s.pop();
            }
            int small = s.empty() ? -1 : s.top();
            v.push_back(small);
            s.push(arr[j]);
        }
        return v;
}
int main(){
int arr[] = {3, 5, 4, 2, 2, 5, 5, 4, 2, 5}; //-1 3 3 -1 -1 4 4 3 -1 4 => result
int length = sizeof(arr)/sizeof(arr[0]);
vector<int> res = smallerOnLeft(arr,length);
for(int val : res)
    {
        cout<<val <<" ";
    }
return 0;
}