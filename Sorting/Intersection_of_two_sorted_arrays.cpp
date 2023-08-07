#include<bits/stdc++.h>
using namespace std;

vector <int> Intersection(int *arr1 , int n1 , int *arr2 ,int n2)
{
    vector < int> res;
    int i = 0 , j = 0 ; 
    while(i < n1 && j < n2 ){
    if(i > 0 && arr1[i-1] == arr1[i]) { i++ ; continue;}
    if(arr1[i] > arr2[j]) j++;
    if(arr1[i] < arr2[j]) i++;
    if(arr1[i] == arr2[j]) {
        res.push_back(arr1[i]);
        i++;
        j++;
    }
    }
    return res;
}

int main()
{
    int nums1[] = {2, 20 , 24, 26, 42, 53};
    int nums2[] = {2 , 20 ,20 ,24 , 42 , 43};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    vector <int> res =  Intersection(nums1 , n1 , nums2 ,n2);
    for(int val = 0 ; val < res.size() ; val++)
        cout<<res[val] << " ";
    cout<<endl;
}