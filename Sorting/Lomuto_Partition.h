int LomutoPartition(int arr[] , int p , int q)
{
    int pivot = arr[q] , i = p-1;
    for(int j = p ; j<=q-1 ; j++)
        {
            if(arr[j] < pivot )
                {
                    i++;
                    swap(arr[i] , arr[j]);
                }
        }
        swap(arr[i+1] , arr[q]);
        return i+1;
}