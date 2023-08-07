#include<bits/stdc++.h>
using namespace std;
/*
int repeatEle(vector<int>&arr)
{
    int rep = 0,count = 1;
    for(int i = 1 ; i  < arr.size()-1 ; i++){
        if(arr[i] == arr[rep])
            count++;
        else    
            count--;
    if(count == 0)  {rep = i,count =1;}
    }
    return arr[rep];
}
*/
//TC==>O(n) && SC==>O(n)
int repeatElem(vector<int>&arr)
{
    int rep = 0,count = 1;
    vector<bool>visited(arr.size(),false);
    for(int i = 0 ; i  < arr.size() ; i++){
        if(visited[arr[i]] == true) return arr[i];
        visited[arr[i]] = true;
    }
    return -1;
}
//TC==>O(n) && SC==>O(1)
int repeatedElement(vector<int>&arr)
{
    int slow = arr[0]+1,fast = arr[0]+1;
    do{
     slow = arr[slow]+1;
     fast = arr[arr[fast]+1]+1;
    }while(slow != fast);
    slow = arr[0]+1;
    while(slow != fast ){
        slow = arr[slow]+1;
        fast = arr[fast]+1;
        }
    return fast-1;
}

int main()
{
    vector<int> nums{0, 1 ,3, 4, 2, 4};
    vector<int> num{1, 5 ,3 ,4 ,0 ,5 ,2};
    // cout << repeatEle(nums) << endl;
    cout << repeatElem(nums)<<endl;
    cout << repeatedElement(num);
}  