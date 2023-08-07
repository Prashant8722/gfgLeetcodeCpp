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

void quickSort(int arr[], int low, int high)
    {
        if(low < high){
        int pivotpos = HoarsePartition(arr, low , high);
        quickSort(arr , low , pivotpos);
        quickSort(arr , pivotpos+1 , high);
        return;
        }
    }
    int main(){        
    //random number generator
    int nums1[40];
    for(int i =0 ; i < 40; i++)
        nums1[i] = rand() % 100;
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int start = 0 , end = n1-1;
    quickSort(nums1 , start , end);
    for(int val = 0 ; val <= end ; val++)
        cout<<nums1[val] << " ";
}