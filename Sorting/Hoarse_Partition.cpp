#include<bits/stdc++.h>
using namespace std;

int HoarsePartition(int arr[] , int p , int q)
{
    int i = p-1 , j = q+1 , pivot = arr[p];
    while(true){
    do
    {
        i++;
    } while (arr[i] < pivot);

    do
    {
        j--;
    } while (arr[j]> pivot);
    if( i >= j) return j;
    swap(arr[i] , arr[j]);
    }
}


int main()
{
    int nums3[] = {50, 80 , 90, 10, 8,29,89,59,16};
    int nums1[] = {5,3,8,4,2,7,1,10};
    int nums4[] = {12,10,5,9};
    int nums2[] = {9,9,9,9,9,9,9,9};//Not stable
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int start = 0 , end = n1-1;
    int ind =  HoarsePartition(nums1 , start , end);
    for(int val = 0 ; val <= end ; val++)
        cout<<nums1[val] << " ";
    cout<<ind;
}