#include<bits/stdc++.h>
using namespace std;

int main(){
int size,sum;
cin>>size>>sum; // sum is always less than equal to sum of all array elements
int arr[size];
int result = 0;
for(int i= 0 ; i < size ; i++ )
    cin>>arr[i];

make_heap(arr , arr + size ,greater<int>()); //creating min heap; ===> tc = O(n)

// for(int i = 0 ; i < size ; i++)
//     cout<<arr[i] << " ";
// cout<<endl;
//tc => removing items one by one O(result * O(log)) each time removing items take o(log); worst case it remove all items so 
//overall time complexity => o ( nlog(n));
int i = 0;
while(sum > 0 )
    {
        if(arr[i] <= sum){
            sum-=arr[i++];
            result++;
        }
        else
            break;
    }
    cout<<"you can purchase maximun items ="<<result;
return result;
}