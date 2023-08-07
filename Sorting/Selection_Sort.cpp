#include <bits/stdc++.h>
using namespace std;

int * SelectionSort(int *arr , int n){
    int minIndex;
    for(int i = 0 ; i < n-1 ; i++)
    {
        minIndex = i;
        for(int j = i+1 ; j < n ;j++)
            {
                if(arr[j] < arr[minIndex])
                    minIndex = j;
            }
        swap(arr[minIndex] , arr[i]);
    }
    return arr;
}
int main()
{
    int nums[20];
    for(int i = 0 ; i < 20 ; i++)
        nums[i] = rand() % 1000;
    int n = sizeof(nums)/sizeof(nums[0]);
    int *arr = SelectionSort(nums, n);
    for(int val = 0 ; val < n ; val++)
        cout<<arr[val] << " ";
    cout<<endl;
    return 0;
}
