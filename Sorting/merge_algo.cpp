#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int l, int m, int r)
    {
        int k = 0;
        int rs = m+1;
        int len = r-l+1;  
        int marray[len];
        while(l<=m && rs <= r)
        {
            if(arr[l] <= arr[rs]){
                marray[k++] = arr[l++];
            }
            else{
                marray[k++] = arr[rs++];
            }
        }
        while(rs <= r )  
                 marray[k++] = arr[rs++];
        while(l <= m )  
                 marray[k++] = arr[l++];
        
         for(int val = 0 ; val < len  ; val++)
            cout<<marray[val] << " ";
        cout<<endl;
    }
    //perfect merge algo which is used in merge sort;
    void mergealgo(int arr[], int l, int m, int r)
    {
        int k = l;
        int la = 0 , ra = 0;
        int lsize = m-l+1, rsize = r-m;
        int len = r-l+1;  
        int arrl[lsize] , arrr[rsize];
        
        for( int i = 0 ; i < lsize ;i++)
            arrl[i] = arr[l+i];

        for(int j = 0 ; j < rsize ;j++)
            arrr[j] =  arr[m+j+1];

        while(la < lsize &&   ra < rsize)
        {
            if(arrl[la] <= arrr[ra]){
                arr[k++] = arrl[la++];
            }
            else{
                arr[k++] = arrr[ra++];
            }
        }
        while(ra < rsize )  
                 arr[k++] = arrr[ra++];
        while(la < lsize )  
                 arr[k++] = arrl[la++];
        
         for(int val = 0 ; val < len  ; val++)
            cout<<arr[val] << " ";
        cout<<endl;
    }
    
int main()
{
    int nums[7] = { 10, 15, 20, 40, 8, 11, 55};
    merge(nums, 0 , 3 , 6);
    mergealgo(nums, 0 , 3 , 6);
    return 0;
}