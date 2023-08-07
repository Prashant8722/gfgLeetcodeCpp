#include <bits/stdc++.h>
using namespace std;
bool ComparePairs(pair<int, int> p1, pair<int, int> p2)
{
    return p1.first < p2.first;
}
void kClosestElement(int arr[], int n, int x, int k)
{
//    Overall, this declaration creates a priority_queue named pq that stores pairs of integers. It uses a vector as the underlying container and a custom comparison function ComparePairs to determine the order of the elements. The &ComparePairs passed to the constructor initializes the priority queue with the custom comparison function.
    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(&ComparePairs)> pq(&ComparePairs);
    for (int i = 0; i < k; i++)
    {
        pq.push({abs(arr[i] - x), i});
    }
    for (int i = k; i < n; i++)
    {
        int topmost = pq.top().first;
        int ele = abs(arr[i] - x);
        if (ele < topmost)
        {
            pq.pop();
            pq.push({ele, i});
        }
    }
    while (!pq.empty())
    {
        cout << arr[pq.top().second] << " ";
        pq.pop();
    }
}
int main()
{
/*   size = 5  array size
        x = 8   closest to seach in array
        k = 2   number of closest
    arr[] = {10 15 7 3 4} 
    o/p   = 10 7
*/    
    int size, x, k;
    cin >> size >> x >> k;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];
    kClosestElement(arr, size, x, k);
    return 0;
}
/*
The priority_queue container is being created with the following specifications:

pair<int, int>: The type of elements stored in the priority queue. In this case, it is a pair of integers.

vector<pair<int, int>>: The underlying container type used to store the elements. Here, it is a vector that holds pairs of integers.

decltype(&ComparePairs): The type of the comparison function or functor used to determine the order of the elements. decltype is used to automatically deduce the type of ComparePairs, which is a function pointer type. This ensures that the custom comparison function ComparePairs is used.

pq(&ComparePairs): The constructor of priority_queue takes the comparison function as an argument to initialize the priority queue object pq. The address of the ComparePairs function is passed as an argument to the constructor.
*/