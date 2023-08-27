#include <iostream>
#include <vector>

using namespace std;

// Function to find the maximum element in an array
int findMax(vector<int>& arr) {
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// Counting Sort for Radix Sort
void countingSort(vector<int>& arr, int exp) {
    int n = arr.size();
    vector<int> output(n);
    vector<int> count(10, 0);

    // Count occurrences of digits at 'exp' position
    for (int i = 0; i < n; i++) {
        count[(arr[i] / exp) % 10]++;
    }

    // Modify the count array to store the actual position of digits in the output
    for (int i = 1; i < 10; i++) {
        count[i] += count[i - 1];
    }

    // Build the output array using the count array and digit positions
    for (int i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }

    // Copy the output array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = output[i];
    }
}

// Radix Sort
void radixSort(vector<int>& arr) {
    int max = findMax(arr);

    // Perform counting sort for every digit
    for (int exp = 1; max / exp > 0; exp *= 10) {
        countingSort(arr, exp);
    }
}

int main() {
    vector<int> arr = {170, 45, 32, 75, 90, 802, 24, 2, 66 ,675};
    
    // Call Radix Sort to sort the array
    radixSort(arr);

    // Display the sorted array
    cout << "Sorted array: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
