int main()
{
    int nums[] = {1, 12 ,0, 4, 2, 3 ,11,24,134,342};
    int len = sizeof(nums) / sizeof(nums[0]);
    int *arr = selectionSort(nums, len);
    for(int val = 0 ; val < len ; val++)
        cout<<nums[val] << " ";
    cout<<endl;
    return 0;
}