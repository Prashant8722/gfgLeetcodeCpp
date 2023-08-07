#include <bits/stdc++.h>
using namespace std;

   int select(int arr[], int i,int len)              //int arr[] == int *arr;
    {
        int minIndex = i ;
        for(int j = i+1 ; j < len; j++)
            {
                if(arr[j] < arr[minIndex])
                    minIndex = j;
            }
        return minIndex;
    }
     
    int * selectionSort(int *arr, int n)
    {
            int minIndex;
            for(int i = 0 ; i < n-1 ; i++)
            {
                minIndex = select(arr , i , n);
                swap(arr[minIndex] , arr[i]);

                for(int val = 0 ; val < n ; val++)
                    cout<<arr[val] << " ";
                cout<<endl;
            }
            return arr;
    }
int main()
{
    // int nums[] = {1, 12 ,0, 4, 2, 3 ,11,24,134,342};
    int nums[] = {14 , 8 ,26 ,14 ,37 ,12 ,23};
    int len = sizeof(nums) / sizeof(nums[0]);
    int *arr = selectionSort(nums, len);
    for(int val = 0 ; val < len ; val++)
        cout<<nums[val] << " ";
    cout<<endl;
    return 0;
}