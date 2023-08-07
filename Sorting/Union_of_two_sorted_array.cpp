#include<bits/stdc++.h>
using namespace std;

vector <int> Union(int *arr1 , int n1 , int *arr2 ,int n2)
{
    vector < int> res;
    int i = 0 , j = 0 ; 
    while(i < n1 && j < n2 ){
    if(i > 0 && arr1[i-1] == arr1[i]) { i++ ; continue;}
    if(j > 0 && arr2[j-1] == arr2[j]) { j++ ; continue;}
    if(arr1[i] > arr2[j]) { res.push_back(arr2[j]);j++; }
    else if(arr1[i] < arr2[j]) {res.push_back(arr1[i]);i++;} 
    else {
        res.push_back(arr1[i]);
        i++;
        j++;
    }
    }
    while(i < n1){
        if(res.back() != arr1[i])
        {
            res.push_back(arr1[i]);   
        }
        i++;
    }
    while(j < n2){
    if(res.back() != arr2[j])
    {
         res.push_back(arr2[j]);
    }
    j++;
    }
    return res;
}

int main()
{
    // int nums1[] = {1,35};
    // int nums2[] = {6 ,9 ,13 ,15 ,20,25,29 ,46};
    int nums1[] = {8,8,9,10,16,23,23,30,31,32,39,39,40,41,42,43,47,49,49};
    int nums2[] = {3,3,6,7,12,13,17,20,23,26,29,32,34,35,37,39,43,45,47,49};
    int n1 = sizeof(nums1) / sizeof(nums1[0]);
    int n2 = sizeof(nums2) / sizeof(nums2[0]);
    vector <int> res =  Union(nums1 , n1 , nums2 ,n2);
    for(int val = 0 ; val < res.size() ; val++)
        cout<<res[val] << " ";
    cout<<endl;
}