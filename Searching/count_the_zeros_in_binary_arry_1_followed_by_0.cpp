#include <bits/stdc++.h>
using namespace std;

int countZeroes(int arr[], int n) {
        int low = 0 ; 
        int high = n-1;
        while(low <= high )
            {
                int mid = low + ( high - low) /2;
                if(arr[mid] == 1 )
                    low = mid +1 ;
                else if (mid == 0 || arr[mid - 1 ] == 1 )
                {
                    return ( n - mid);
                }
                else
                {
                    high = mid -1;
                }
            }
    }
    int main()
{
    int nums[]={0, 0 ,0, 0, 0, 0, 0};
    int len = sizeof(nums)/sizeof(int);
    cout << len <<endl;
    cout << countZeroes(nums, len);
}