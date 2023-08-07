#include <bits/stdc++.h>
using namespace std;

int non_decreasing(vector<int>&vec) {
    sort(vec.begin(),vec.end());
    for(int val = 0 ; val < vec.size() ; val++)
        cout<<vec[val] << " ";
    cout<<endl;
    return 0;
}
int non_increasing(vector<int>vec) {
    sort(vec.begin(),vec.end(),greater<int>());
    for(auto val : vec)
        cout<<val << " ";
    cout<<endl;
    return 0 ;
}
int main()
{
    vector<int>nums = {42, 21 ,2222, 224, 212, 422, 13};
    non_decreasing(nums);
    non_increasing(nums);
    for(int val : nums)
        cout<<val << " ";
    cout<<endl;
    return 0;
}
