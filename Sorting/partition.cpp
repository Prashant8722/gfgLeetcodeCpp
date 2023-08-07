#include<bits/stdc++.h>
using namespace std;

int partition(int arr[] , int p , int q)
{
    int i = p ; int pivot = arr[p];     //let first element is pivot.
    for(int j = i + 1 ; j <= q ; j++)
        {
            if(arr[j] <= pivot)
                {
                    i++;
                    swap(arr[i] , arr[j]);
                }
        }
        swap(arr[p] , arr[i]);
        for(int val = 0 ; val < q-p+1 ; val++)
        cout<<arr[val] << " ";
        return i;
}
int main()
{
    int nums1[] = {50, 80 , 90, 10, 8,29,89,59,16};
    int nums2[] = {5,3,8,4,2,7,1,10};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int start = 0 , end = n1-1;
    int ind =  partition(nums1 , start , end);
    cout<<endl << ind;
}