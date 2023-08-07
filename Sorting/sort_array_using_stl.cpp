#include <bits/stdc++.h>
using namespace std;
#include<algorithm>
int non_decreasing(int arr[], int n) {
    sort(arr,arr+n);
    for(int val = 0 ; val < n ; val++)
        cout<<arr[val] << " ";
    cout<<endl;
    return 0;
}
int non_incrasing(int arr[], int n) {
    sort(arr,arr+n,greater<int>());
    for(int val = 0 ; val < n ; val++)
        cout<<arr[val] << " ";
    cout<<endl;
    return 0 ;
}
int main()
{
    int nums[] = {42, 21 ,2222, 224, 212, 422, 13};
    int n = sizeof(nums) / sizeof(nums[0]);
    non_decreasing(nums , n);
    non_incrasing(nums,n);
    for(int val = 0 ; val < n ; val++)
        cout<<nums[val] << " ";
    cout<<endl;
    return 0;
}


