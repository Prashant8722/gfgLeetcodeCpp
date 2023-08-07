#include <bits/stdc++.h>
using namespace std;

//Brute force approach => O(log(n)) , possible int O(log(n))
void peakElement(int *nums ,int size)
{
    vector<int>vec;
    if(nums[0] > nums[1])
        vec.push_back(nums[0]);
    for(int i = 1; i <= size-2;i++)
        if(nums[i-1] < nums[i] && nums[i] < nums[i+1])
            vec.push_back(nums[i]);
     if(nums[size-1] > nums[size-2])
        vec.push_back(nums[size-1]);
    for(int i : vec )
        cout<< i << " ";
    return;
}
int main()
{
    int nums[] = {311, 211 ,421, 123, 124, 126, 31,39,45,50,60,70,80,90,100,111,223};
    int size = sizeof(nums)/sizeof(nums[0]);
    peakElement(nums,size);
    return 0;
}