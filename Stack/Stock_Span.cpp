#include<bits/stdc++.h>
using namespace std;
vector<int> stockSpan(int arr[], int len)
{
    vector<int>vec;
    vec.push_back(1);
    for(int i = 1 ; i < len ;i++)
        {
            int count = 1;
            for(int j = i-1 ; j >= 0 ; j--)
                {
                    if(arr[j] <= arr[i])
                        count++; 
                    else 
                        break;
                }
                vec.push_back(count);
        }
    return vec;
}
int main(){
// int arr1[] = { 30 ,20 , 25,28 ,27,29};
// int arr[] = { 21 ,24, 25,26 ,27,29};
int arr[] = { 21 , 19, 18 , 14, 14,10};
int length = sizeof(arr) / sizeof(arr[0]);
vector<int> res = stockSpan(arr, length);
for(int i : res)
    cout<< i << " ";
return 0;
}