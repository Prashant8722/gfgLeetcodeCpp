    #include<bits/stdc++.h>
    using namespace std;

    long long int countMerge(long long *arr,long long l,long long m,long long r)
    {
        int lsize = m-l+1 , rsize = r-m;
        int k  = l , i = 0 , j = 0 ;
        long long int res = 0;
        long long left[lsize], right[rsize];
        
        for(int i = 0 ; i < lsize ; i=i+1)
            left[i] = arr[l+i];
        
        for(int j = 0 ; j < rsize; j=j+1)
            right[j] = arr[m+1+j];
            
        while(i < lsize && j < rsize){
        if(left[i] <= right[j]) {arr[k] = left[i]; i++;}
        else {
            arr[k] = right[j];
            j++;
            res += lsize - i;
        }
        k++;
        }
        while(i < lsize)
            arr[k++] = left[i++];
        while( j < rsize)
            arr[k++] = right[j++];
        return res;
    }
    
    long long int inversion(long long *arr,long long  l,long long  r)
    {
        long long int res = 0;
        if(l < r ){
        long long m = l + (r - l)/2;
        res += inversion(arr, l , m);
        res += inversion(arr , m+1  , r);
        res += countMerge(arr,l,m,r);
        }
        return res;
    }
    long long int inversionCount(long long arr[], long long n)
    {
        long long l = 0 , r = n-1; 
        long long int res = inversion(arr,l,r);
        return res;
    }

    int main()
{
    long long nums[] = {50 , 40 ,20 ,5 ,19 ,90 , 23 ,16};
    long long nums1[] = {1, 5 ,11 ,41 ,8 ,15 ,21};
    long long nums2[] = {50 ,40 ,20,5,19,90,23,16 };
    cout << inversionCount(nums,8) << endl;
}