
#include <bits/stdc++.h>
using namespace std;

    void insertionSort(int arr[], int n)
    {
        for(int i = 1 ; i < n ; i ++ )
            {
                int key = arr[i];
                int j = i-1;
                while(j>=0 && arr[j] > key)
                    {
                        arr[j+1] = arr[j];
                        j--;        
                    }
                arr[j+1] = key;
            }
        return;
    }

int main()
{
    int nums[21];
    for(int i = 0 ; i < 21 ; i++)
        nums[i] = rand() % 80;
    int len = sizeof(nums) / sizeof(nums[0]);
    insertionSort(nums, len);
    for(int val = 0 ; val < len ; val++)
        cout<<nums[val] << " ";
    cout<<endl;
    return 0;
}