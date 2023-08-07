#include <bits/stdc++.h>
using namespace std;
int firstkSmallest(int arr[], int l, int r, int k)
{
    priority_queue<int, vector<int>> pq; // max-heap
    for (int i = 0; i < k; i++)
    {
        pq.push(arr[i]);
    }
    for (int i = k; i <= r; i++)
    {
        int x = pq.top();
        if (x > arr[i])
        {
            pq.pop();
            pq.push(arr[i]);
        }
    }
    // printing first k smallest element 
    for (int i = 0; i < k; i++)
    {
       int  x = pq.top();
        pq.pop();
        cout << x << " ";
    }
}
int main()
{
    int size , k;
    cin >> size >> k;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    firstkSmallest(arr,0,size-1,k);
    return 0;
}