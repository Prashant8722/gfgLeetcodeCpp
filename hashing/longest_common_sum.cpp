#include <bits/stdc++.h>
using namespace std;
int longestCommonSum(int arr1[], int arr2[], int n)
{
    /*Time complexitiex ===>O(n)
    space com ==> O(n)
      */

    int temp[n];
    for (int i = 0; i < n; i++)
    {
        temp[i] = (arr1[i] - arr2[i]);
    }

    int max_len = 0;
    int sum = 0;
    unordered_map<int, int> m;

    for (int i = 0; i < n; i++)
    {
        sum += temp[i];
        if (sum == 0)
        {
            max_len = i + 1;
        }
        if (m.find(sum) != m.end())
        {
            max_len = max(max_len, i - m[sum]);
        }
        else
        {
            m.insert({sum, i});
        }
    }
    return max_len;
}

int main()
{
        int arr1[] = {0,0,1,0,0,0,0,1,1,1,0,0,0,0,0,1,0,0,1,1};
        int arr2[] = {1,1,1,1,1,1,1,0,0,0,1,1,1,0,1,1,0,1,0,0};
        cout<<longestCommonSum(arr1 ,arr2,sizeof(arr1) / sizeof(arr1[0]));
    return 0;
}