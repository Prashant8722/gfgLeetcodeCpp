#include <bits/stdc++.h>
using namespace std;

int binarySearch(int arr[] ,int low ,int high,int target)
{
    int sz = high-low + 1;
    while(low <= high)
        {
            int mid = low + (high - low)/2;
            if(arr[mid] == target) return mid;
            else if (arr[mid] > target)
                {
                    high = mid -1;
                }
            else
                low = mid + 1;
        }
        return -1;
}
int infiniteArraySearch(int arr[],int target)
{
    int i = 1; 
    if(arr[0] == target ) return 0;
    while(arr[i] < target)
        i=i*2;
    if(arr[i] == target ) return i;
    else
            return binarySearch(arr, i/2 + 1 , i-1,target);       
}
int main()
{
    int nums[] = {1, 11 ,21, 23, 24, 26, 31,39,45,50,60,70,80,90,100,111,123};  //It is let in finite array.
    int target = 111;
    cout << infiniteArraySearch(nums,target);
}