#include <bits/stdc++.h>
using namespace std;
void getMedian(int arr[], int n)
{
    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> l;
    //vector<float> res;
    s.push(arr[0]);
    // res.push_back(arr[0]);
    cout<<arr[0]<<endl;
    for (int i = 1; i < n; i++)
    {
        int x = arr[i];
        if (s.size() > l.size())
        {
            if (x < s.top())
            {
                l.push(s.top());
                s.pop();
                s.push(x);
            }
            else
            {
                l.push(x);
            }
            cout<<(s.top() + l.top()) / 2.0 << endl;
            // res.push_back((s.top() + l.top()) / 2.0);
        }
        else
        {
            if (x <= s.top())
            {
                s.push(x);
            }
            else
            {
                l.push(x);
                s.push(l.top());
                l.pop();
            }
            // res.push_back(s.top());
            cout<<s.top()<<" "<<endl;
        }
    }
}
int main()
{
    // int arr[] = {5, 15, 1, 3};  //o/p ==>   5 10 5 4
    int arr[] = {25, 7, 10, 15, 20};
    int n = sizeof(arr) / sizeof(arr[0]);
    getMedian(arr, n);
    return 0;
}