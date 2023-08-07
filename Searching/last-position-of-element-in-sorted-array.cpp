#include <bits/stdc++.h>
using namespace std;

int lastOccurance(vector<int> &nums, int target)
{
    int low = 0;
    int result = -1;
    int len = nums.size();
    int high = len - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target)
        {
            result = mid;
            low = mid + 1;
        }
        else if (nums[mid] < target)
            low = mid + 1;
        else if (nums[mid] > target)
            high = mid - 1;
    }
    return result;
}

int main()
{
    vector<int> nums{1, 1 ,2, 2, 2, 2, 3};
    int target = 4;
    cout << lastOccurance(nums, target);
}