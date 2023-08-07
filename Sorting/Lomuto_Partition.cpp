#include<bits/stdc++.h>
using namespace std;
#include "Lomuto_Partition.h"
/* int LomutoPartition(int arr[] , int p , int q)
{
    int pivot = arr[q] , i = p-1;
    for(int j = p ; j<=q-1 ; j++)
        {
            if(arr[j] < pivot )
                {
                    i++;
                    swap(arr[i] , arr[j]);
                }
        }
        swap(arr[i+1] , arr[q]);
        return i+1;
} */

int main()
{
    int nums3[] = {16,59,89,29,8,10,90,80,50};
    int nums1[] = {5,3,8,4,2,7,1,10};
    //random number generator
    // int nums1[20];
    // for(int i = 0 ; i < 20 ; i++)
    //     nums1[i] = rand() % 1000;
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int start = 0 , end = n1-1;
    int ind =  LomutoPartition(nums1 , start , end);
    for(int val = 0 ; val <= end ; val++)
        cout<<nums1[val] << " ";
    cout<<endl << ind;
}