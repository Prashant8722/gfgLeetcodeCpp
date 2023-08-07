#include <bits/stdc++.h>
using namespace std;

int * modifiedBSort(int *arr , int n){
    for(int i = 0 ; i < n-1 ; i++){
        bool swapped = false;
        for(int j = 0 ; j < n-i-1 ; j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j] , arr[j+1]);
                    swapped = true;
                    }
            }
    if(swapped == false) break;
    }
    return arr;
}
int main()
{
    int nums[] = {21, 21 ,22, 24, 422, 122};
    int n = sizeof(nums)/sizeof(nums[0]);
    int *arr = modifiedBSort(nums, n);
    for(int val = 0 ; val < n ; val++)
        cout<<arr[val] << " ";
    cout<<endl;
    return 0;
}