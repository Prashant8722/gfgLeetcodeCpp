#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Function to find triplets that sum up to zero
vector<vector<int>> threeSum(vector<int> &nums)
{
    vector<vector<int>> res;
    int n = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 0; i < n - 2; i++)
    { // Iterate until the third-to-last element
        if (i > 0 && nums[i] == nums[i - 1])
        {
            continue; // Skip duplicates for the first element
        }
        int target = -nums[i];
        int left = i + 1;
        int right = n - 1;
        while (left < right)
        {
            int sum = nums[left] + nums[right];
            if (sum < target)
            {
                left++;
            }
            else if (sum > target)
            {
                right--;
            }
            else
            {
                res.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1])
                {
                    left++; // Skip duplicates for the second element
                }
                while (left < right && nums[right] == nums[right - 1])
                {
                    right--; // Skip duplicates for the third element
                }
                left++;
                right--;
            }
        }
    }
    return res;
}
int main()
{
    // Example usage
    vector<int> nums = {-1, 0, 1, 2, -1, -4};
    // Find triplets that sum up to zero
    vector<vector<int>> triplets = threeSum(nums);
    // Print the resulting triplets
    for (const auto &triplet : triplets)
    {
        cout << "[";
        for (int i = 0; i < triplet.size(); i++)
        {
            cout << triplet[i];
            if (i != triplet.size() - 1)
            {
                cout << ", ";
            }
        }
        cout << "]" << endl;
    }
    return 0;
}
